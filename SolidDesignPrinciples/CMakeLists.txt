# SolidDesignPrinciples
set(SRP_SOURCES "SRP.cpp")
set(OCP_SOURCES "OCP.cpp")
set(LSP_SOURCES "LSP.cpp")
set(ISP_SOURCES "ISP.cpp")
set(DIP_SOURCES "DIP.cpp")

add_executable (SRPProgram ${SRP_SOURCES})
target_link_libraries(SRPProgram PRIVATE ${Boost_LIBRARIES})
target_include_directories(SRPProgram PRIVATE ${Boost_INCLUDE_DIRS})
add_executable (OCPProgram ${OCP_SOURCES})
add_executable (LSPProgram ${LSP_SOURCES})
add_executable (ISPProgram ${ISP_SOURCES})
add_executable (DIPProgram ${DIP_SOURCES})
