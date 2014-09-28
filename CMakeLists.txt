cmake_minimum_required(VERSION 2.8)
include(ExternalProject)

ExternalProject_Add(
    Teensy
    SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/vendor/
    CONFIGURE_COMMAND ""
    DOWNLOAD_COMMAND ""
    INSTALL_COMMAND ""
    BUILD_IN_SOURCE 1
    BUILD_COMMAND make)