cmake_minimum_required(VERSION 3.6)

project (MouseCEvent
  DESCRIPTION "Demo of event processing with blocking I/O in Userspace"
  LANGUAGES C)

add_compile_options(-Wall -Wconversion -Wextra -pedantic)

add_executable (mouseevent_linux_c mouseevent_linux_c.c)
