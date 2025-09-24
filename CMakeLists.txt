cmake_minimum_required(VERSION 3.15)
project(Learncpp VERSION 0.1)
add_executable(Learncpp main.cpp)

add_subdirectory(Math)

target_link_libraries(Learncpp
	PUBLIC
	Math
)

target_include_directories(Learncpp PUBLIC
	"${PROJECT_BINARY_DIR}"
	"${PROJECT_SOURCE_DIR}/Math"
)


set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
