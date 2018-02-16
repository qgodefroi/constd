cmake_minimum_required(VERSION 3.8)
project(constd LANGUAGES CXX)

add_library(constd INTERFACE)
target_include_directories(constd INTERFACE include/)
target_compile_features(constd
  INTERFACE
  cxx_std_17)

add_subdirectory(test)
