cmake_minimum_required(VERSION 3.25)
project(personnel)

set(CMAKE_CXX_STANDARD 20)

add_executable(personnel testlinkedlist.cpp personmgr.cpp personmgr.h person.cpp person.h HashTable.cpp HashTable.h LinkedList.cpp LinkedList.h)
