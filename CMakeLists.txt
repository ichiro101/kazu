
cmake_minimum_required(VERSION 2.8.11)

project(kazu)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)

# Find the QtWidgets library
find_package(Qt5Widgets)

# Tell CMake to create the kazu executable
add_executable(kazu WIN32 kazu.cpp)

# Use the Widgets module from Qt 5.
target_link_libraries(kazu Qt5::Widgets)
