cmake_minimum_required(VERSION 3.10)

# Set the project name
project(AIOptimizedDynamicPortfolio)

# Set the C++ standard to C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find SFML package
find_package(SFML 2.5 COMPONENTS system window graphics REQUIRED)

# Include directories for headers
include_directories(include)  # Include the 'include' directory for header files
include_directories(${SFML_INCLUDE_DIR})  # Include SFML headers

# Add the executable for your project
add_executable(AIOptimizedDynamicPortfolio  
    src/main.cpp
    src/pathfinding/Astar.cpp
    src/pathfinding/BFS.cpp
    src/pathfinding/Dijkstra.cpp
    src/pathfinding/DrawMap.cpp
    src/pathfinding/DrawText.cpp
    src/pathfinding/GetAdjacentCells.cpp
    src/pathfinding/GetCell.cpp
    src/pathfinding/GetMouseCell.cpp
)

# Link SFML libraries
target_link_libraries(AIOptimizedDynamicPortfolio sfml-graphics sfml-window sfml-system)

# Optionally: Specify where to find resource files (like images)
set(RESOURCES_DIR "${CMAKE_SOURCE_DIR}/Resources/Images")
