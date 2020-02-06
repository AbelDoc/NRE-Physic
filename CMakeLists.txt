cmake_minimum_required(VERSION 3.15)
project(NRE-Physic)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static -static-libgcc -static-libstdc++")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "../bin")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pedantic -Wno-virtual-move-assign -Wall -Wextra -Wfatal-errors -Wfloat-equal -Wstrict-overflow -Wshadow -Wconversion -Wunreachable-code -Wuninitialized -Winit-self -Werror -fstrict-overflow -O3 -std=c++17")

include_directories(C:/Users/abell/Documents/GitHub/NRE-Math/src)
include_directories(C:/Users/abell/Documents/GitHub/NRE-Utility/src)


include_directories(src/Physic)
include_directories(src/Physic/2D)
include_directories(src/Physic/2D/Bounding)
include_directories(src/Physic/2D/Shape)

set(COMPILE_LIST
        src/Header/NRE_Physic.hpp
        src/Header/NRE_Physic2D.hpp
        src/Physic/2D/Bounding/NRE_AABB.hpp
        src/Physic/2D/Bounding/NRE_AABB.tpp
        src/Physic/2D/Shape/NRE_Circle.hpp
        src/Physic/2D/Shape/NRE_Shape.hpp)

set(EXEC_LIST
        ${COMPILE_LIST}
        src/NRE_Main.cpp)

add_executable(NRE_Physic ${EXEC_LIST})
