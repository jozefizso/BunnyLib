cmake_minimum_required(VERSION 3.25)
project(gtest)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 20)

# v1.13.0 = b796f7d44681514f58a683a3a71ff17c94edb0c1
include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        b796f7d44681514f58a683a3a71ff17c94edb0c1
)

FetchContent_MakeAvailable(googletest)
