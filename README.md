# CEF 3

## Mac

(ne radi build cefclient)

http://code.google.com/p/chromium/wiki/MacBuildInstructions

http://code.google.com/p/chromium/wiki/Clang


GYP_GENERATORS=ninja GYP_DEFINES=clang=1 ./build/gyp_chromium

   cd src
    build/gyp_chromium
    BUILDTYPE=Release make



## linux prerequisites

     sudo apt-get -y install libgtk2.0-dev libnss3-dev libgconf2-dev libpci-dev libgnome-keyring-dev libudev-dev libcups2-dev libxss-dev libbz2-dev libasound2-dev gperf bison flex libelfg0-dev

     #cups-pk-helper
     #x11proto-scrnsaver-dev
     #libxcb-screensaver0-dev
     #libalsaplayer-dev


## Build

    mkdir chromium
    git clone git@github.com:hernad/CEF3 cef

    cd cef
    echo "fetching depot_tools .."
    git clone https://git.chromium.org/chromium/tools/depot_tools.git

    echo "depot_tools to your PATH"
    export PATH="$PATH":`pwd`/depot_tools

    cp .gclient ../
    cd ..
    echo syncing chromium project source code - chromium_src
    gclient sync --revision  src@170167
    cd chromium_src
    mv ../cef .
    
    echo "building make files for cef project"
    ./cef_create_projects.sh
    cd ..
    echo "pokrecem make iz chromium src: `pwd`"
    BUILDTYPE=Release make cefclient


## Notes


### cef_resources.h

linux: u make procesu se generiše

      ... ACTION Generating resources from libcef/resources/cef_resources.grd out/Release/obj/gen/cef/grit/cef_resources.h

out/Release:

      ./obj/gen/cef/grit/cef_resources.h


# cefrepos svn info

    vagrant@f18-dev-1:~/chromium/src/cef$ svn info
    Putanja: .
    URL: http://chromiumembedded.googlecode.com/svn/trunk/cef3
    Korijen repozitorija: http://chromiumembedded.googlecode.com/svn
    UUID repozitorija: 5089003a-bbd8-11dd-ad1f-f1f9622dbc98
    Revizija: 949
    Vrsta čvora: direktorij
    Raspored: normal
    Last Changed Author: magreenblatt@gmail.com
    Last Changed Rev: 949
    Last Changed Date: 2012-12-12 15:43:57 +0100 (Sri, 12 Dec 2012)


