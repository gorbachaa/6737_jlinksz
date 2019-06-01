export CROSS_COMPILE=/home/alex/Android/utility/Toolchain/arm-eabi-4.8/bin/arm-eabi-
export ARCH=arm 
export SUBARCH=arm 
export KBUILD_BUILD_USER="gorbach.aa"
export KBUILD_BUILD_HOST="gmail.com"
make O=a_kernel my_defconfig
make O=a_kernel | tee build.log
