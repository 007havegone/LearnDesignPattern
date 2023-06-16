# CMakeList.txt : CMake project for LearnDesignPattern, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

#set(CMAKE_TOOLCHAIN_FILE "${VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake")


# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("LearnDesignPattern")

# Use the C++ 20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED 20)
set(CMAKE_CXX_EXTENSIONS OFF)

# Set boost search policy
set(Boost_USE_STATIC_LIBS ON)
set(Boost_USE_STATIC_MULTITHREAD ON)
set(Boost_USE_STATIC_RUNTIME OFF)

find_package(Boost REQUIRED)




# Use the .editorconfig to set the indent for tag
set_property(GLOBAL PROPERTY USE_FOLDERS ON)
source_group(".editorconfig" FILES ".editorconfig")
project ("LearnDesignPattern")


# Add source to this project's executable.
file(GLOB_RECURSE SRP_SOURCES "SolidDesignPrinciples/SRP/*.cpp")
file(GLOB_RECURSE OCP_SOURCES "SolidDesignPrinciples/OCP/*.cpp")
file(GLOB_RECURSE LSP_SOURCES "SolidDesignPrinciples/LSP/*.cpp")
file(GLOB_RECURSE ISP_SOURCES "SolidDesignPrinciples/ISP/*.cpp")
file(GLOB_RECURSE DIP_SOURCES "SolidDesignPrinciples/DIP/*.cpp")


add_executable (SRPProgram ${DIP_SOURCES})
target_link_libraries(SRPProgram PRIVATE ${Boost_LIBRARIES})
target_include_directories(SRPProgram PRIVATE ${Boost_INCLUDE_DIRS})
add_executable (OCPProgram ${OCP_SOURCES})
add_executable (LSPProgram ${LSP_SOURCES})
add_executable (ISPProgram ${ISP_SOURCES})
add_executable (DIPProgram ${DIP_SOURCES})