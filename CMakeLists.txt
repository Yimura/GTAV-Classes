cmake_minimum_required(VERSION 3.11)

project(GTAV-Classes)

include(CheckIncludeFileCXX)

set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_REQUIRED_QUIET ON)

set(OK TRUE)

file(GLOB_RECURSE HEADERS "*.hpp")

message(STATUS "")

foreach(HEADER ${HEADERS})
    get_filename_component(FILENAME ${HEADER} NAME)
    check_include_file_cxx("${HEADER}" ${FILENAME}_OK)

    if(${FILENAME}_OK)
        message(STATUS "${FILENAME} OK!")
    else()
        set(OK FALSE)
        message(SEND_ERROR "${FILENAME} failed to compile!")
    endif()
endforeach()

message(STATUS "")

if(NOT OK)
    file(READ "${CMAKE_CURRENT_BINARY_DIR}/CMakeFiles/CMakeError.log" LOG)
    message(STATUS ${LOG})
endif()

