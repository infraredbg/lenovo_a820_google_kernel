#!/bin/bash

export PATH=$PATH:$PWD/../arm-eabi-4.9-ubertc/bin
export CROSS_COMPILE=arm-eabi-

export TARGET_BUILD_VARIANT=user
export ARCH=arm

cd kernel
mkdir out

make -C $PWD O=$PWD/out lenovo_a820_defconfig
make -j8 -C $PWD O=$PWD/out

