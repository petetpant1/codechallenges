cmake_minimum_required( VERSION 3.1 )

project ( TRSProject CXX)

set(CMAKE_CXX_STANDARD 11)
#set_target_properties(treelib PROPERTIES LINKER_LANGUAGE CXX)

add_library(treelib STATIC tree/tree.h tree/simple_tree.h)
target_include_directories(treelib PUBLIC tree)
set_target_properties(treelib PROPERTIES LINKER_LANGUAGE CXX)


add_executable(main main.cpp)
target_link_libraries(main PUBLIC treelib)
