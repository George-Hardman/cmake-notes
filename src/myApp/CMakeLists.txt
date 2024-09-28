message("Running myApp CMakeLists.txt")

add_executable(MyProjectTarget main.cpp)

# Include the header file from the library
target_include_directories(MyProjectTarget PUBLIC "${PROJECT_SOURCE_DIR}/src/myLib")

# Link the executable code from the library
target_link_libraries(MyProjectTarget PRIVATE myLibrary)