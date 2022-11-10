cmake_minimum_required(VERSION 3.9)
project(excelColumnNumber)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC TRUE)
set(CMAKE_AUTORCC TRUE)

add_executable(excelColumnNumber
  excelColumnNumber.cpp
  main.cpp
)

