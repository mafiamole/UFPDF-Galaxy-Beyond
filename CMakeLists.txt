cmake_minimum_required(VERSION 2.8)

project(UFPDF_GB)

find_package(MoleBox REQUIRED)

set ( HEADERS include/Game.hpp include/Player.hpp)
set ( SOURCES src/Main.cpp src/Game.cpp src/Player.cpp)

add_subdirectory(src)




add_executable(UFPDF_GB ${HEADERS} ${SOURCES})
include_directories (${MoleBox_INCLUDE_DIRECTORIES} include )
target_link_libraries( UFPDF_GB ${MoleBox_LIBRARIES})
