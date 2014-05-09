
cmake_minimum_required(VERSION 2.8.11)

project(kazu)

# since we're using a module
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")


# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)

# Find the Qt libraries we need
find_package(Qt5Widgets)
find_package(FFMPEG)

message(STATUS "FFMPEG_FOUND ${FFMPEG_FOUND}")
message(STATUS "FFMPEG_INCLUDE_DIR ${FFMPEG_INCLUDE_DIR}")

# source directory
subdirs(src)
