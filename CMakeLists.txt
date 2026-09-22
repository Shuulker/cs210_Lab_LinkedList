cmake_minimum_required(VERSION 4.3)
project(cs210_Lab_LinkedList)

set(CMAKE_CXX_STANDARD 20)

add_executable(cs210_Lab_LinkedList main.cpp
        ArrayList.h
        Node.h
        Data.cpp
        Data.h
        LinkedList.h
        List.h)
