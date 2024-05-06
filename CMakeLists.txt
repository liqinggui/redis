cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(redis LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Boost 1.71 REQUIRED COMPONENTS program_options)

include_directories(${Boost_INCLUDE_DIRS})

add_executable(redis redis.cc)

target_link_libraries(redis PUBLIC ${Boost_LIBRARIES})