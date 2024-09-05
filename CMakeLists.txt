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
    car_builder.hpp
    car_state.hpp
    car.hpp
)

set(SOURCES
    car_builder.cpp
    car.cpp
    main.cpp
)

#-------------------------------------------------------------------#
# project type

add_executable(${PROJECT_NAME} ${HEADERS} ${SOURCES})

#-------------------------------------------------------------------#