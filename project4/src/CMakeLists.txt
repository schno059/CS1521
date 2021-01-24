project(Project4)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++14")

add_executable(infix
  DivideByZeroExcep.cpp
  project4.cpp)
