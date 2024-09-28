cmake_minimum_required(VERSION 3.10)

project(MyProject)

# The high level CMakeLists.txt purely adds the sub-directories in.
# The first one creates the library, and the second create the target and links the library.
add_subdirectory(src/myLib)
add_subdirectory(src/myApp)
