cmake_minimum_required(VERSION 3.0.0)
project(app VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(app main.cpp del_ext.cpp main.h add.cpp read.cpp str_del.cpp cbash.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
