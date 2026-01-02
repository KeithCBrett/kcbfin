# Minimum required version of cmake needed to build project
cmake_minimum_required(VERSION 4.2)

# Name of project for future reference
project(kcbfin)

# Name of executable generated
add_executable(kcbfin)

# Associate source files with project
target_sources(kcbfin
	PRIVATE
		main.cpp
)

# Name of action library
add_library(action)

# Associate source files with library
target_sources(action
	PRIVATE
		action.cpp

	PUBLIC
		FILE_SET HEADERS
		FILES
			action.h
)

# Link action library to main
target_link_libraries(kcbfin
	PRIVATE
		action
)
