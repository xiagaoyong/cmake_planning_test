cmake_minimum_required(VERSION 3.28.1)

project(planning)

set(CMAKE_CXX_STANDARD 11)

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

aux_source_directory(${PROJECT_SOURCE_DIR} SRCS)

add_executable(${PROJECT_NAME} ${SRCS})


