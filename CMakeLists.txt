cmake_minimum_required(VERSION 3.26)
project(ime C)

set(CMAKE_C_STANDARD 11)

add_executable(01 00/01.c) #简单的秒值-时间值转换
add_executable(02 00/02.c) #基于数组的秒值-时间值转换
add_executable(03 00/03.c) #基于函数的秒值-时间值转换
add_executable(04 00/04.c) #基于枚举的秒值-时间值转换
add_executable(05 00/05.c) #基于指针的秒值-时间值转换
add_executable(06 00/06.c) #基于结构体的秒值-时间值转换
add_executable(07 00/07.c) #基于结构体指针的秒值-时间值转换
add_executable(year 00/year.c) #基于结构体指针的秒值-时间值转换
add_executable(home 00/homework.c) #基于结构体指针的秒值-时间值转换

include_directories(08)
file(GLOB_RECURSE 08 "08/*.*")
add_executable(08 08/App.c ${08}) #基于多文件的秒值-时间值转换

include_directories(09)
file(GLOB_RECURSE 09 "09/*.*")
add_executable(09 09/App.c ${09}) #基于多媒体定时器的秒值-时间值转换

include_directories(10)
file(GLOB_RECURSE 10 "10/*.*")
add_executable(10 10/App.c ${10}) #电子钟的API设计与应用

include_directories(11)
file(GLOB_RECURSE 11 "11/*.*")
add_executable(11 11/App.c ${11}) #循环队列的API设计与应用

include_directories(12)
file(GLOB_RECURSE 12 "12/*.*")
add_executable(12 12/App.c ${12}) #协议处理的API设计与应用

include_directories(13)
file(GLOB_RECURSE 13 "13/*.*")
add_executable(13 13/App.c ${13}) #模拟从机命令接收与数据发送

include_directories(14)
file(GLOB_RECURSE 14 "14/*.*")
add_executable(14 14/App.c ${14}) #模拟主机命令发送与数据接收

include_directories(Test_1)
file(GLOB_RECURSE Test_2 "Test/*.*")
add_executable(Test_3 Test/Test.c ${Test_2}) #基于结构体指针的秒值-时间值转换