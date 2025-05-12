cmake_minimum_required(VERSION 3.10) 

project(TourneyApiV6) 



set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(Boost_INCLUDE_DIR "C:/Program Files/Boost/boost_1_88_0")

find_package(Boost)
if(Boost_FOUND)
  include_directories(${Boost_INCLUDE_DIRS})
  add_executable(tourneyapi
    main.cpp
    libs/pch.cpp) 
  target_link_libraries(tourneyapi ${Boost_LIBRARIES})
endif()


#Gemini Thinks this will include my pch for mingw 

target_precompile_headers(tourneyapi PUBLIC libs/pch.h
)
