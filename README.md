# GUI-Qt

This repository is done for the GUI-Qt project for [P2PSP](http://www.p2psp.org/en/).

Please ensure vlc-qt libraries are installed.You can download it from [here](https://vlc-qt.tano.si/#download).

Download and Compile the p2psp-core and p2psp-console versions

# Install [P2PSP core](https://github.com/P2PSP/core.git) and [P2PSP console](https://github.com/P2PSP/p2psp-console.git)

```
git clone https://github.com/P2PSP/core.git
git clone https://github.com/P2PSP/p2psp-console.git
```
# Compile

```
cd core
./make.py
cd ../p2psp-console
./make.py

```

compile the Qt-player (Please note that you must have Qt-5-7-1 inorder to proceed).

```
qmake src.pro
make
```
# Usage

```
cd bin
./splitter --source_addr 150.214.150.68 --source_port 4551 --splitter_port 8001 --channel BBB-134.ogv --header_size 30000 > /dev/null &
./monitor --splitter_addr 127.0.0.1 --splitter_port 8001 > /dev/null &
./peer --splitter_addr 127.0.0.1 --splitter_port 8001 --player_port 10000 
```

