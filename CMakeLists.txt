cmake_minimum_required(VERSION 3.13)
project(TestMap)

set(CMAKE_CXX_STANDARD 14)

add_executable(TestMap main.cpp level.cpp level.h tinystr.cpp tinystr.h tinyxml.cpp tinyxml.h tinyxmlerror.cpp tinyxmlparser.cpp)


target_link_libraries(TestMap -lsfml-graphics -lsfml-window
        -lsfml-system -lGL -lsfml-network /home/leonid/Fun/Box2D/Build/bin/x86_64/Debug/libBox2D.a)