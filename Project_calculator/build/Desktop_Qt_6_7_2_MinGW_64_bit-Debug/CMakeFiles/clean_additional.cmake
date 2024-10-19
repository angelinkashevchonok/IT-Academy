# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Project_calculator_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Project_calculator_autogen.dir\\ParseCache.txt"
  "Project_calculator_autogen"
  )
endif()
