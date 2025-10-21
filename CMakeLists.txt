cmake_minimum_required(VERSION 3.15)

project(main VERSION 0.1)

set(CMAKE_CXX_STANDARD 17)

add_compile_options(
	-Wall
	-Wextra
	-Wpedantic
	-Wconversion
	-Wshadow
	-Werror
)

add_executable(main main.cpp)
target_include_directories(main PUBLIC
	"${PROJECT_BINARY_DIR}"
)
