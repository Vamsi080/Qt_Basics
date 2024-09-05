# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\sudoko_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\sudoko_autogen.dir\\ParseCache.txt"
  "sudoko_autogen"
  )
endif()
