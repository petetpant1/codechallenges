cmake_minimum_required( VERSION 3.1 )

project ( StructuresFramework CXX)

set(CMAKE_CXX_STANDARD 11)

add_library(structlib STATIC Structure.cpp Structure.h Layer1Structures.h)
set_target_properties(structlib PROPERTIES LINKER_LANGUAGE CXX)

add_library(treelib STATIC tree/tree.h)
set_target_properties(treelib PROPERTIES LINKER_LANGUAGE CXX)

add_executable(main main.cpp)
target_link_libraries(main PUBLIC structlib treelib)


