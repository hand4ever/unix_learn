cmake_minimum_required(VERSION 3.9)
project(unix_learn)

set(CMAKE_CXX_STANDARD 11)

add_executable(unix_learn
        s1/demo.c
        s1/ls.c s1/mycopy2.c s1/myprocess1.c s1/myprocess2.c)
