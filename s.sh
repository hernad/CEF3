gyp cef.gyp -D os_posix=1 -D gcc_version=46 -D toolkit_uses_gtk=1 -D selinux=0 \
    -D target_arch=ia32 -D toolkit_views=0 \
    -D test_isolation_mode=0 -D test_isolation_outdir=/tmp/ \
    -D use_glib=1 -D os_bsd=0 -D chromeos=0 \
    -D linux_use_tcmalloc=1 \
    -D component=shared_library \
    -D gtest_target_type=shared_library \
    -D clang=0 -D clang_type_profiler=0 \
    -D linux_keep_shadow_stacks=0 -D linux_use_heapchecker=1 \
    -D order_profiling=0 \
    -D sysroot='' \
    -D use_openssl=1 \
    -D use_gconf=1 -D use_gio=1 \
    -D linux_link_gsettings=0 \
    -D use_cups=1 -D use_gnome_keyring=1 -D linux_link_gnome_keyring=0  -D use_ibus=0 \
    -D library=static_library  \
    -D inside_chromium_build=1  \
    -D use_aura=0 \
    -D enable_webrtc=0 -D enable_plugins=1 -D input_speech=0 -D notifications=1 \
    -D use_x11=1 \
    -D use_system_yasm=0 \
    -D arm_neon=0 -D armv7=0 \
    -D proprietary_codecs=0 \
    -D branding=Chromium \
    -D release_valgrind_build=0 \
    -D use_system_libjpeg=1 \
    -D libjpeg_gyp_path='../third_party/libjpeg/libjpeg.gyp' \
    -D use_canvas_skia=1 \
    -D grit_defines=0 \
    --debug=variables --depth src


#common.gypi:      ['use_system_libjpeg==1 or use_libjpeg_turbo==0', {
#common.gypi:        'libjpeg_gyp_path': '../third_party/libjpeg/libjpeg.gyp',
#common.gypi:        'libjpeg_gyp_path': '../third_party/libjpeg_turbo/libjpeg.gyp

#GRIT (Google Resource and Internationalization Tool) is a tool for Windows
#projects to manage resources and simplify the localization workflow.
    #library - openssl
    #inside_chromium_build - webkit
