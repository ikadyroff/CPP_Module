cmake_minimum_required(VERSION 3.23)
project(ex01)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ex01
        Contact.cpp
        Contact.h
        main.cpp
        myAPB.h
        PhoneBook.cpp
        PhoneBook.h)
