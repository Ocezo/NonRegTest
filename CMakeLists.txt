cmake_minimum_required(VERSION 3.10)

set(PROJ_NAME NonRegTest)
project(${PROJ_NAME})

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(${CMAKE_SOURCE_DIR})

add_library(CppUnitLite
    CppUnitLite/Test.cpp
    CppUnitLite/TestResult.cpp
    CppUnitLite/TestRegistry.cpp
    CppUnitLite/SimpleString.cpp
    CppUnitLite/Failure.cpp
)

# Ajouter le premier test
add_executable(addition_test src/addition_test.cpp)
target_link_libraries(addition_test PRIVATE CppUnitLite)

# Ajouter le deuxième test
add_executable(multiply_test src/multiply_test.cpp)
target_link_libraries(multiply_test PRIVATE CppUnitLite)

# Permettre d'exécuter "make test"
enable_testing()
add_test(NAME TestAddition COMMAND addition_test)
add_test(NAME TestMultiply COMMAND multiply_test)
