project(StatisticalAnalysis)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++14")

add_executable(statistic
  main.cpp
  stat.cpp)
