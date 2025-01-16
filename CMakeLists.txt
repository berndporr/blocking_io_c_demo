cmake_minimum_required(VERSION 3.6)

project (MouseCEvent
  DESCRIPTION "Demo of event processing with blocking I/O in Userspace"
  LANGUAGES CXX)

set (CMAKE_CXX_STANDARD 17)
add_compile_options(-Wall -Wconversion -Wextra -pedantic)
include(GNUInstallDirs)

add_executable (mouseevent_linux_c mouseevent_linux_c.cpp)
