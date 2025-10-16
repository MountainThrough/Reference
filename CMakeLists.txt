cmake_minimum_required(VERSION 3.12)
project(Calc)
set(CMAKE_CXX_STANDARD 11)
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR})
set(SRC_LIST add.c;div.c;main.c;mult.c;sub.c)
add_executable(tain ${SRC_LIST})
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -g")
enable_testing()  # 启用测试功能
add_test(NAME MyTest COMMAND tain)  # 添加测试