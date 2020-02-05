cmake_minimum_required(VERSION 3.15)
project(NRE-Physic)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static -static-libgcc -static-libstdc++")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "../bin")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pedantic -Wno-virtual-move-assign -Wall -Wextra -Wfatal-errors -Wfloat-equal -Wstrict-overflow -Wshadow -Wconversion -Wunreachable-code -Wuninitialized -Winit-self -Werror -fstrict-overflow -O3 -std=c++17")

include_directories(C:/Users/abell/Documents/GitHub/NRE-Math/src)
include_directories(C:/Users/abell/Documents/GitHub/NRE-Utility/src)


include_directories(src/Physic)
include_directories(src/Physic/Manager)

set(COMPILE_LIST
        src/Header/NRE_Physic.hpp
        src/Physic/Manager/NRE_PhysicManager.hpp
        src/Physic/Manager/NRE_PhysicManager.tpp)

set(EXEC_LIST
        ${COMPILE_LIST}
        src/NRE_Main.cpp)

add_executable(NRE_Physic ${EXEC_LIST})
