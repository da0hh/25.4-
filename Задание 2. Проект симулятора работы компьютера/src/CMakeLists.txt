add_executable("C++_Skillbox" "main.cpp" "../include/cpu.h" "cpu.cpp" "../include/ram.h" "ram.cpp" "../include/disk.h" "disk.cpp" "../include/gpu.h" "gpu.cpp" "../include/kbd.h" "kbd.cpp")

target_include_directories("C++_Skillbox" PRIVATE ${CMAKE_SOURCE_DIR}/include ${CMAKE_SOURCE_DIR}/src)