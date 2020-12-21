cmake_minimum_required(VERSION 3.17)
project(chess_engine)

set(CMAKE_CXX_STANDARD 14)

add_executable(chess_engine main.cpp Piece.cpp Piece.h King.cpp King.h Queen.cpp)