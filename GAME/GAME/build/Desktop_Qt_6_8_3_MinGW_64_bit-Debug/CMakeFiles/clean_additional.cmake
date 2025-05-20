# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\GAME_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\GAME_autogen.dir\\ParseCache.txt"
  "GAME_autogen"
  )
endif()
