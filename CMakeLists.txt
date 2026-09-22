cmake_minimum_required(VERSION 4.3)
project(untitled1)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled1 main.cpp
        ArrayList.h
        Node.h
        Data.cpp
        Data.h
        LinkedList.h)
