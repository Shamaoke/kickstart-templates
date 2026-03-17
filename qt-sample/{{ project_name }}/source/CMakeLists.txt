
##
## ::: {{ project_group_name }} | {{ project_name | replace(from="-", to=" ") | capitalize }} :::
##

cmake_minimum_required(VERSION 4.1)

set(CMAKE_CXX_COMPILER /usr/bin/clang++)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fcolor-diagnostics")

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project({{ project_name }} VERSION 0.0.0 LANGUAGES CXX)

find_package(Qt6 REQUIRED COMPONENTS Core)

set(CMAKE_AUTOMOC ON)

set(HEADERS include/sample.hh)

set(SOURCES sample.cc main.cc)

add_executable(${PROJECT_NAME} ${HEADERS} ${SOURCES})

target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Core)

