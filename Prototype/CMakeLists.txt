# Protopty
set(Proto_SOURCE "Prototype.cpp")
add_executable(ProtoProgram ${Proto_SOURCE})
target_link_libraries(ProtoProgram PRIVATE ${Boost_LIBRARIES})
target_include_directories(ProtoProgram PRIVATE ${Boost_INCLUDE_DIRS})
