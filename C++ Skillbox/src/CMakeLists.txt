# CMakeList.txt: проект CMake для C++ Skillbox; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

set(CMakeTarget ${CMAKE_SOURCE_DIR}/include)
# Добавьте источник в исполняемый файл этого проекта.
add_executable ("C++ Skillbox" "main.cpp" "${MY_INCLUDE_DIR}/physic.h" "physic.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeTarget PROPERTY CXX_STANDARD 20)
endif()

add_executable(Cpp_Skillbox main.cpp ${MY_INCLUDE_DIR}/physic.h physic.cpp)
target_include_directories(Cpp_Skillbox PRIVATE ${CMAKE_SOURCE_DIR}/include ${CMAKE_SOURCE_DIR}/src)