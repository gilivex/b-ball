cmake_minimum_required(VERSION 3.22)
project(NbaLeague)

set(CMAKE_CXX_STANDARD 14)

add_executable(NbaLeague main.cpp Team.cpp Team.hpp Game.cpp Game.hpp Leauge.cpp Leauge.hpp Schedule.cpp Schedule.hpp n.cpp)
