# 1,设置 CMake 最低版本号
cmake_minimum_required( VERSION 3.5 )

# 2,设置工程名称
project(Test)

# 3,设定编译参数
set(CMAKE_CXX_STANDARD    11)  # 指定 C++ 版本
set(CMAKE_BUILD_TYPE "Debug")  # 调试使用Debug，可以查看中间变量；发布使用Release，运行速度快

# 4，把源码编译成一个可执行文件，会保存在当前(build)目录下
add_executable(main main.cpp Tree.cpp)
