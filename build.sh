#!/bin/bash

# cleam
rm build/*
mkdir -p build
cd build
cmake -S ..
cmake --build .
echo -e "\n"
./src/myApp/MyProjectTarget
