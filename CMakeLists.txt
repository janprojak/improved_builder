#-------------------------------------------------------------------#
# cmake version

cmake_minimum_required(VERSION 3.22)

#-------------------------------------------------------------------#
# project flags config

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 11)

#-------------------------------------------------------------------#
# project config

project(builder_with_mandatory_methods_called)

#-------------------------------------------------------------------#
# project sources

set(HEADERS
    headers/car_builder.hpp
    headers/car_state.hpp
    headers/car.hpp
)

set(SOURCES
    sources/car_builder.cpp
    sources/car.cpp
    main.cpp
)

#-------------------------------------------------------------------#
# project type

add_executable(${PROJECT_NAME} ${HEADERS} ${SOURCES})

#-------------------------------------------------------------------#
# include directories

target_include_directories(${PROJECT_NAME}
    PRIVATE ${PROJECT_SOURCE_DIR}/headers
)

#-------------------------------------------------------------------#