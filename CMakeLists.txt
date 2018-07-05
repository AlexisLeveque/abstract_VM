cmake_minimum_required(VERSION 3.10)
project(abstract_vm)

set(CMAKE_CXX_STANDARD 11)

add_executable(abstract_vm main.cpp
        IOperand.hpp
        OpInt8.cpp OpInt8.hpp
        OpInt16.cpp OpInt16.hpp
        OpInt32.cpp OpInt32.hpp
        OpFloat.cpp OpFloat.hpp
        OpDouble.cpp OpDouble.hpp
        OperandFactory.cpp OperandFactory.hpp Instruction.cpp Instruction.hpp)