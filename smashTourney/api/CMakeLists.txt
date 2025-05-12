cmake_minimum_required(VERSION 3.10) 

project(TourneyApiV6) 

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(tourneyapi
main.cpp
libs/pch.cpp) 


#Gemini Thinks this will include my pch for mingw 

target_precompile_headers(tourneyapi PUBLIC libs/pch.h
)

