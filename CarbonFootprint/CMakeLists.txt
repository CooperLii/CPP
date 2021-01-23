cmake_minimum_required(VERSION 3.13)
project(CarbonFootprint)

set(CMAKE_CXX_STANDARD 14)

add_executable(CarbonFootprint Car.h Car.cpp Bicycle.cpp Bicycle.h Building.h Building.cpp CarbonFootprint.h CarbonFootprint.cpp "CarbonFootprint main.cpp")