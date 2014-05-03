
cmake_minimum_required(VERSION 2.8.11)

project(kazu)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)

# Find the Qt libraries we need
find_package(Qt5Widgets)
find_package(Qt5Multimedia)

# source directory
subdirs(src)
