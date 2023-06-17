# CMakeList.txt : CMake project for LearnDesignPattern, include source and define
# project specific logic here.
#
# 1. Basic information for proejct
cmake_minimum_required (VERSION 3.8)
project ("LearnDesignPattern")
set(CMAKE_TOOLCHAIN_FILE "${VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake")
# Use the .editorconfig to set the indent for tag
set_property(GLOBAL PROPERTY USE_FOLDERS ON)
source_group(".editorconfig" FILES ".editorconfig")
project ("LearnDesignPattern")
# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

# 2. C++ standard library
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED 20)
set(CMAKE_CXX_EXTENSIONS OFF)


# 3. The third-party library
# Enable the google test suit
enable_testing()
find_package(GTest CONFIG REQUIRED)

# Enable Boost
set(Boost_USE_STATIC_LIBS ON)
set(Boost_USE_STATIC_MULTITHREAD ON)
set(Boost_USE_STATIC_RUNTIME OFF)

# Enable the dependency injection 
find_package(Boost REQUIRED COMPONENTS serialization)
find_path(BEXT_DI_INCLUDE_DIRS "boost/di.hpp")

# 4. Add the subdirectory
add_subdirectory(Builder)
add_subdirectory(Factory)
add_subdirectory(SolidDesignPrinciples)
add_subdirectory(Prototype)
add_subdirectory(Singleton)
