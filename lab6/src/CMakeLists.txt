project(lab6)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++14")

add_executable(lab6
  PrecondViolatedExcep.cpp
  Rational.cpp
  lab6.cpp)
