cmake_minimum_required(VERSION 3.22)

project(
    FixedPointArithmetic
    VERSION 0.1.0
    DESCRIPTION "A test case of the CNL fixed-point arithmetic library"
    HOMEPAGE_URL "https://schenax.student.ust.hk/"
    LANGUAGES CXX)

include(cmake/project-is-top-level.cmake)
option(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Link to the address sanitizer when build in a Debug mode
add_compile_options($<$<CONFIG:Debug>:-fsanitize=address>)
add_link_options($<$<CONFIG:Debug>:-fsanitize=address>)

# ---- Find external projects  ----

# include(cmake/find-3rdparty.cmake)
set(CNL_BUILD_TESTS OFF)
add_subdirectory(${PROJECT_SOURCE_DIR}/thirdParty/cnl)

# ---- Declare library ----

add_library(FixedPointArithmetic_lib OBJECT src/library.cpp)

target_include_directories(FixedPointArithmetic_lib
                           PUBLIC ${PROJECT_SOURCE_DIR}/src)

# Boost::headers is for for header-only Boost dependencies
target_link_libraries( FixedPointArithmetic_lib PRIVATE Cnl)
target_compile_features(FixedPointArithmetic_lib PUBLIC cxx_std_11)

# ---- Declare executable ----

add_executable(FixedPointArithmetic_exe src/main.cpp)
add_executable(FixedPointArithmetic::exe ALIAS FixedPointArithmetic_exe)

set_target_properties(
    FixedPointArithmetic_exe
    PROPERTIES LINK_FLAGS -no-pie
               OUTPUT_NAME FixedPointArithmetic
               EXPORT_NAME exe)

target_compile_features(FixedPointArithmetic_exe PRIVATE cxx_std_11)

target_link_libraries(
    FixedPointArithmetic_exe
    PRIVATE FixedPointArithmetic_lib)

target_include_directories(FixedPointArithmetic_exe
                           PRIVATE ${PROJECT_SOURCE_DIR}/src)

