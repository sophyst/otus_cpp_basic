cmake_minimum_required(VERSION 3.5)

project(03.homework)

add_executable(
	guess_number
	check_value.h
	check_value.cpp
	random_value.h
	random_value.cpp
	high_scores.h
	high_scores.cpp
	argument.h
	argument.cpp
	guess_number.cpp
)

set_target_properties(guess_number PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)
