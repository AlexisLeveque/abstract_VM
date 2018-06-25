cmake_minimum_required(VERSION 3.10)
project(abstract_vm)

set(CMAKE_CXX_STANDARD 11)

add_executable(abstract_vm main.cpp IOperand.hpp)