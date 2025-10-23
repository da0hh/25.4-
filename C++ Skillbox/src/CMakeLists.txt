add_executable("C++_Skillbox" "main.cpp" "../include/physic.h" "physic.cpp")

target_include_directories("C++_Skillbox" PRIVATE ${CMAKE_SOURCE_DIR}/include ${CMAKE_SOURCE_DIR}/src)