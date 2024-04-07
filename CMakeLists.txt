cmake_minimum_required(VERSION 3.28.1)

project(planning)

set(CMAKE_CXX_STANDARD 11)

#变量和目录设置
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)# 动态库和exe都指定到bin目录下面
#CMAKE_LIBRARY_OUTPUT_DIRECTORY
#CMAKE_ARCHIVE_OUTPUT_DIRECTORY


#动态库
aux_source_directory(${PROJECT_SOURCE_DIR}/src SRCS)
add_library(common 
SHARED 
${SRCS})
target_include_directories(common PUBLIC ${PROJECT_SOURCE_DIR}/include)

#把planning_main.cpp 编译为planning可执行文件
add_executable(${PROJECT_NAME} planning_main.cpp)


#target_include_directories(${PROJECT_NAME}
#PUBLIC 
#${PROJECT_SOURCE_DIR}/include)


#连接
target_link_libraries(${PROJECT_NAME}
PUBLIC 
common)