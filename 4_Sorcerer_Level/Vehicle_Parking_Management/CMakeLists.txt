

cmake_minimum_required(VERSION 3.11.3)

# set(CMAKE_CXX_STANDARD 17)
project(Parking_management)
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-std=c++17")

include(include/menu.hpp
        include/parking.hpp
        include/vehicle.hpp)

# Find all executables
file(GLOB project_SRCS 
    src/main.cpp
    src/vehicle.cpp
    src/parking.cpp
    src/menu.cpp
    # include/vehicle.hpp
    # include/parking.hpp
    # include/menu.hpp
) #src/*.h

# Add project executable
add_executable(Parking ${project_SRCS})
