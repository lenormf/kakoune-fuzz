#!/bin/sh

set -e

sudo apt-get update
sudo apt-get install -y git subversion

git clone https://github.com/google/fuzzer-test-suite.git
svn co http://llvm.org/svn/llvm-project/compiler-rt/trunk/lib/fuzzer libfuzzer

(
    cd fuzzer-test-suite/tutorial
    ./install-deps.sh
    ./install-clang.sh
    cd -
    rm -rf fuzzer-test-suite
)

(
    cd libfuzzer
    ./build.sh
    sudo mkdir -p /usr/local/lib
    sudo mv libFuzzer.a /usr/local/lib/libLLVMFuzzer.a
    cd -
    rm -rf libfuzzer
)
