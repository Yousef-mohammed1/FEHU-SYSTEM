# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\testnew_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\testnew_autogen.dir\\ParseCache.txt"
  "testnew_autogen"
  )
endif()
