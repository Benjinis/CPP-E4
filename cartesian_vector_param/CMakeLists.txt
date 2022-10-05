cmake_minimum_required(VERSION 3.0)

# set the project name
project(TP2)

# add the lib
add_library(mysource SHARED vector.cpp)

# add another
#add_library(mysource_2 SHARED vector.hh)

# add the executable
add_executable(main main.cc)

# do not forget to link
target_link_libraries(main mysource)

#target_link_libraries(main mysource_2)