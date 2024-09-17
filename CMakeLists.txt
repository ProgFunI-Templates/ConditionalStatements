cmake_minimum_required(VERSION 3.14..3.30)
project(
    Project
    VERSION 0.1
    DESCRIPTION ""
    LANGUAGES CXX)

find_package(Git QUIET)

if(GIT_FOUND AND EXISTS "${PROJECT_SOURCE_DIR}/.git")
    execute_process(COMMAND ${GIT_EXECUTABLE} submodule update --init --recursive
                    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
                    RESULT_VARIABLE GIT_SUBMOD_RESULT)
    if(NOT GIT_SUBMOD_RESULT EQUAL "0")
        message(FATAL_ERROR "git submodule update --init --recursive failed with ${GIT_SUBMOD_RESULT}, please checkout submodules")
    endif()
endif()

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)

    # GoogleTest requires at least C++14
    set(CMAKE_CXX_STANDARD 17)
    set(CMAKE_CXX_STANDARD_REQUIRED ON)

    # Ensure using -std=c++xx instead of g++xx
    set(CMAKE_CXX_EXTENSIONS OFF)

    # Enables folders in IDEs that support it
    set_property(GLOBAL PROPERTY USE_FOLDERS ON)

    # Includes testing if this is the main app project
    include(CTest)
    include(GoogleTest)
    add_subdirectory(tests)
endif()

include(FetchContent)

# Compiled library is here
add_subdirectory(src)

# Exe code is here
add_subdirectory(apps)