cmake_minimum_required(VERSION 3.20)
project(Scheduler)

set(CMAKE_CXX_STANDARD 14)

add_executable(Scheduler main.cpp Class.cpp Class.h Requirements.cpp Requirements.h Schedule.cpp Schedule.h)
