
Fetch depot_tools: 
    git clone https://git.chromium.org/chromium/tools/depot_tools.git

Add depot_tools to your PATH:
$ export PATH="$PATH":`pwd`/depot_tools



    gclient config http://src.chromium.org/svn/trunk/src
    gclient sync

http://code.google.com/p/chromium/wiki/MacBuildInstructions

http://code.google.com/p/chromium/wiki/Clang


GYP_GENERATORS=ninja GYP_DEFINES=clang=1 ./build/gyp_chromium

