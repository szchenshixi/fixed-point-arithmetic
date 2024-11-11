# [Ref] A pretty version of all Boost modules
# https://stackoverflow.com/questions/29989512/where-can-i-find-the-list-of-boost-component-that-i-can-use-in-cmake
# find_package(Boost REQUIRED COMPONENTS ALL)
# find_package(Boost REQUIRED)

# Needs CMake 3.14 or above
include(FetchContent)
# -------------------------------------------------------------------
# NamedType
# message(NOTICE "Fetching NamedType...")
# fetchcontent_declare(
#     NamedType
#     SYSTEM
#     GIT_REPOSITORY https://github.com/joboccara/NamedType.git
#     SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/NamedType
#     GIT_TAG 76668abe09807f92a695ee5e868f9719e888e65f
#     # GIT_TAG v1.1.0
#     GIT_PROGRESS FALSE
#     GIT_SHALLOW ON)
# -------------------------------------------------------------------
# CLI11
# message(NOTICE "Fetching CLI11...")
# FetchContent_Declare(
#     CLI11
#     SYSTEM
#     GIT_REPOSITORY https://github.com/CLIUtils/CLI11
#     SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/3rdparty/CLI11
#     # GIT_TAG v2.3.2
#     GIT_TAG main
#     GIT_SHALLOW ON)

# fetchcontent_makeavailable(Boost Catch2 fmt yaml-cpp doxygen-theme NamedType CLI11)

