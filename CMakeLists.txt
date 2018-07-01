cmake_minimum_required(VERSION 3.10)
project(abstract_vm)

set(CMAKE_CXX_STANDARD 11)

add_executable(abstract_vm main.cpp IOperand.hpp createOperand.cpp Int8.cpp Int8.hpp Int16.cpp Int16.hpp Int32.cpp Int32.hpp Float.cpp Float.hpp Double.cpp Double.hpp)