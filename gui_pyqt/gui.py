import sys
import os
import user
import vlc 
from PyQt4 import QtGui, QtCore ,uic
# volume_before = 0
class Player(QtGui.QMainWindow):
    """A simple Media Player using VLC and Qt
    """
    def __init__(self, master=None):
        QtGui.QMainWindow.__init__(self, master)
        self.setWindowTitle("Media Player")

        # creating a basic vlc instance
        self.Instance = vlc.Instance()
        # creating an empty vlc media player
        self.MediaPlayer = self.Instance.media_player_new()
        uic.loadUi("gui.ui",self)
        self.Palette = self.VideoFrame.palette()
        self.Palette.setColor (QtGui.QPalette.Window,
                               QtGui.QColor(0,0,0))
        self.VideoFrame.setPalette(self.Palette)
        self.VideoFrame.setAutoFillBackground(True)
        # self.PositionSlider.setToolTip("Position")
        # self.PositionSlider.setMaximum(1000)
        # self.connect(self.PositionSlider,
        #              QtCore.SIGNAL("sliderMoved(int)"), self.setPosition)
        self.connect(self.PlayButton, QtCore.SIGNAL("clicked()"),
                     self.PlayPause)
        self.connect(self.StopButton, QtCore.SIGNAL("clicked()"),
                     self.Stop)
        self.volumeslider.setMaximum(100)
        self.volumeslider.setValue(self.MediaPlayer.audio_get_volume())
        self.volumeslider.setToolTip("Volume")
        # self.HButtonBox.addWidget(self.VolumeSlider)
        self.connect(self.volumeslider,
                     QtCore.SIGNAL("valueChanged(int)"),self.setVolume)
        self.Timer = QtCore.QTimer(self)
        self.Timer.setInterval(200)
        self.connect(self.Timer, QtCore.SIGNAL("timeout()"),
                     self.updateUI)
        # self.connect(openfile, QtCore.SIGNAL("triggered()"), self.OpenFile)
        # self.connect(Quit, QtCore.SIGNAL("triggered()"), self.OpenFile)
        self.connect(self.VolumeButton,QtCore.SIGNAL("clicked()"),
                    self.setMute)
        self.openfile.triggered.connect(self.OpenFile)
        self.Quit.triggered.connect(sys.exit)
        self.actionPause.triggered.connect(self.PlayPause)
        self.actionStop.triggered.connect(self.Stop)
        # self.hidebutton.setEnabled(True)
        # self.hidebutton.setCheckable(True)
        # if self.hidebutton.clicked == "True":
        #     print "done"
        self.hidebutton.setCheckable(True)
        self.hidebutton.toggled.connect(self.check_state)
        self.fullscreen.setCheckable(True)
        self.fullscreen.toggled.connect(self.hide_all)
    def hide_all(self,checked):
        if checked:
            self.menubar.hide()
            self.fullscreen.setIcon(QtGui.QIcon("icons/full_out.png"))
            self.setWindowState(QtCore.Qt.WindowMaximized)
        else:
            self.menubar.show()
            self.fullscreen.setIcon(QtGui.QIcon("icons/full_in.png"))
            # self.setWindowState(440,240)
    def check_state(self,checked):
        if checked:
            self.channels_box.hide()
            self.hidebutton.setText("show channels")
        elif not checked:
            self.channels_box.show()
            self.hidebutton.setText("hide channels")
        
    
    def PlayPause(self):
        """Toggle play/pause status
        """
        if self.MediaPlayer.is_playing():
            self.MediaPlayer.pause()
            # self.PlayButton.setText("Play")
            self.PlayButton.setIcon(QtGui.QIcon('icons/play.png'))
            self.isPaused = True
        else:
            if self.MediaPlayer.play() == -1:
                self.OpenFile()
                return
            self.MediaPlayer.play()
            self.PlayButton.setIcon(QtGui.QIcon('icons/pause.png'))
            # self.PlayButton.setText("Pause")
            self.Timer.start()
            self.isPaused = False

    def Stop(self):
        """Stop player
        """
        self.MediaPlayer.stop()
        self.PlayButton.setIcon(QtGui.QIcon('icons/play.png'))
        # self.PlayButton.setText("Play")

    def OpenFile(self):
        """Open a media file in a MediaPlayer
        """
        filename = QtGui.QFileDialog.getOpenFileName(self,
                                                     "Open File", user.home)
        if not filename:
            return

        # create the media
        self.Media = self.Instance.media_new(unicode(filename))
        # put the media in the media player
        self.MediaPlayer.set_media(self.Media)

        # parse the metadata of the file
        self.Media.parse()
        # set the title of the track as window title
        self.setWindowTitle(self.Media.get_meta(0))

        # the media player has to be 'connected' to the QFrame
        # (otherwise a video would be displayed in it's own window)
        # this is platform specific!
        # you have to give the id of the QFrame (or similar object) to
        # vlc, different platforms have different functions for this
        if sys.platform == "linux2": # for Linux using the X Server
            self.MediaPlayer.set_xwindow(self.VideoFrame.winId())
        elif sys.platform == "win32": # for Windows
            self.MediaPlayer.set_hwnd(self.VideoFrame.winId())
        elif sys.platform == "darwin": # for MacOS
            self.MediaPlayer.set_agl(self.VideoFrame.windId())
        self.PlayPause()

    def setVolume(self, Volume):
        """Set the volume
        """ 
        self.MediaPlayer.audio_set_volume(Volume)

    def setMute(self):
        self.MediaPlayer.audio_toggle_mute()
        # while 1:
        #     if self.MediaPlayer.is_playing():
        #         self.VolumeButton.setEnabled(True)
        #     else:
        #         self.VolumeButton.setEnabled(False)
        # if self.MediaPlayer.is_playing():
        
        if not self.MediaPlayer.audio_get_mute():
            self.VolumeButton.setIcon(QtGui.QIcon("icons/mute.png"))
            self.volumeslider.setValue(0)
        else:
            self.VolumeButton.setIcon(QtGui.QIcon("icons/volume.png"))
            self.volumeslider.setValue(50)
            # print volume_before

    def setPosition(self, Position):
        """Set the position
        """
        # setting the position to where the slider was dragged
        self.MediaPlayer.set_position(Position / 1000.0)
        # the vlc MediaPlayer needs a float value between 0 and 1, Qt
        # uses integer variables, so you need a factor; the higher the
        # factor, the more precise are the results
        # (1000 should be enough)

    def updateUI(self):
        """updates the user interface"""
        # setting the slider to the desired position
        # self.PositionSlider.setValue(self.MediaPlayer.get_position() * 1000)

        if not self.MediaPlayer.is_playing():
            # no need to call this function if nothing is played
            self.Timer.stop()
            if not self.isPaused:
                # after the video finished, the play button stills shows
                # "Pause", not the desired behavior of a media player
                # this will fix it
                self.Stop()

if __name__ == "__main__":
    app = QtGui.QApplication(sys.argv)
    MediaPlayer = Player()
    MediaPlayer.show()
    MediaPlayer.resize(640, 480)
    sys.exit(app.exec_())
