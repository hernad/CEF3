# CEF

Fetch depot_tools: 
    git clone https://git.chromium.org/chromium/tools/depot_tools.git

Add depot_tools to your PATH:
$ export PATH="$PATH":`pwd`/depot_tools



    gclient config http://src.chromium.org/svn/trunk/src
    gclient sync

http://code.google.com/p/chromium/wiki/MacBuildInstructions

http://code.google.com/p/chromium/wiki/Clang


GYP_GENERATORS=ninja GYP_DEFINES=clang=1 ./build/gyp_chromium

## linux

libgtk2.0-dev
libnss3-dev
libgconf2-dev
libpci-dev
libgnome-keyring-dev
libudev-dev
#cups-pk-helper
libcups2-dev
#x11proto-scrnsaver-dev
#libxcb-screensaver0-dev
libxss-dev
libbz2-dev
#libalsaplayer-dev
libasound2-dev
gperf
bison
flex
libelfg0-dev

    cd src
    build/gyp_chromium
    BUILDTYPE=Release make


# CEF supose chrome dir is 
    python tools/gyp_cef --depth src
    
