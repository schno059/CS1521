project(TicTacToe)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++14") 

add_executable(tictactoe
  main.cpp
  board.cpp
  game.cpp
  player.cpp)
