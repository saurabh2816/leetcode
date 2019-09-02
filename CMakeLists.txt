cmake_minimum_required(VERSION 3.13)
project(Basics)

set(CMAKE_CXX_STANDARD 14)

#add_executable(Basics set/main.cpp)
#add_executable(Basics "leetcode/2. Add Two Numbers.cpp")
#add_executable(Basics set/remove.cpp)
#add_executable(Basics "leetcode/934. Shortest Bridge.cpp" )
#add_executable(Basics random/DijkstrasShortestPath.cpp )




# deque
#add_executable(Basics graph/adjList-vector.cpp )
add_executable(Basics  graph/adjList-list.cpp)