cmake_minimum_required(VERSION 3.27)
project(Cdatastructures)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_FLAGS "-static") # Add this to every assignment. It will make the exe file standalone.

add_executable(echo echo/main.cpp echo/echo_application.cpp)
add_executable(commandLine commandLine/main.cpp)
add_executable(stringstream stringstream/main.cpp)
add_executable(vector vector/main.cpp)
add_executable(dynamic_array dynamic_array/main.cpp)
add_executable(pointers pointers/main.cpp)
add_executable(linked_lists linked_lists/main.cpp)
add_executable(smart_ptr smart_ptr/main.cpp)
add_executable(queues queues/main.cpp)