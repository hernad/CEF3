# CEF 3

## Init


    mkdir chromium
    mkdir -p src/cef
    cd src/cef
    git clone git@github.com:hernad/CEF3 cef
    cp .gclient ../../
    gclient sync
    cd src/cef
    ./cef_create_projects.sh
    cd ..
    echo "iz chromium source-a pokrecem make 
    BUILDTYPE=Release make cefclient


## Notes


## cef_resources.h

linux: u make procesu se generiše

... ACTION Generating resources from libcef/resources/cef_resources.grd out/Release/obj/gen/cef/grit/cef_resources.h



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


# CEF3

clone this repository under chromium src root `chromium_src/CEF3`


    python tools/gyp_cef


=> ../Makefile

 
vagrant@f18-dev-1:~/github/src/CEF3$ python tools/gclient_hook.py 

    Checking CEF and Chromium revisions...

    ________ running '/usr/bin/python tools/check_revision.py' in '/home/vagrant/github/src/CEF3'
    /home/vagrant/github/src/CEF3:  (Not a versioned resource)

    svn: A problem occurred; see other errors for details

    WARNING: Incorrect Chromium revision; found 173294, expected 170167

    Please see CHROMIUM_BUILD_COMPATIBILITY.txt for instructions.
    Using CEF revision None @ None
    Using Chromium revision 173294 @ http://src.chromium.org/svn/trunk/src

    Generating CEF version header file...

    ________ running '/usr/bin/python tools/make_version_header.py --header include/cef_version.h --cef_version VERSION --chrome_version ../chrome'
    svn: '.' is not a working copy
    File include/cef_version.h updated.

    Patching build configuration and source files for CEF...

    ________ running '/usr/bin/python tools/patcher.py --patch-config patch/patch.cfg' in '/home/vagrant/github/src/CEF3'
    Reading patch file /home/vagrant/github/src/CEF3/patch/patches/gritsettings.patch
    WARNING:root:successfully patched ../tools/gritsettings/resource_ids
    Reading patch file /home/vagrant/github/src/CEF3/patch/patches/build.patch
    WARNING:root:successfully patched ../build/common.gypi
    WARNING:root:successfully patched ../build/mac/strip_save_dsym
    Reading patch file /home/vagrant/github/src/CEF3/patch/patches/tools_gyp.patch
    WARNING:root:successfully patched ../tools/gyp/pylib/gyp/input.py
    Reading patch file /home/vagrant/github/src/CEF3/patch/patches/zlib.patch
    WARNING:root:successfully patched ../third_party/zlib/contrib/minizip/unzip.c
    Skipping patch file /home/vagrant/github/src/CEF3/patch/patches/spi_webcore_364.patch
    Writing file /home/vagrant/github/src/CEF3/patch/patch_state.h.

    Generating CEF project files...

    ________ running '/usr/bin/python tools/gyp_cef cef.gyp -I cef.gypi' in '/home/vagrant/github/src/CEF3'
    Updating projects from gyp files...
    
