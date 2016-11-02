cmake_minimum_required (VERSION 2.8)
project (vivaolinux)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(vivaolinux main.cpp)
target_link_libraries(vivaolinux ${BOOST_LIBS})
