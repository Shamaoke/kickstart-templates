
##
## ::: {{ project_group_name }} | {{ project_name | replace(from="-", to=" ") | capitalize }} :::
##

cmake_minimum_required(VERSION 4.1)

set(CMAKE_CXX_COMPILER /usr/bin/clang++)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fcolor-diagnostics")

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project({{ project_name }} VERSION 0.0.0 LANGUAGES CXX)

set(SOURCES main.cc)

add_executable(${PROJECT_NAME} ${SOURCES})

