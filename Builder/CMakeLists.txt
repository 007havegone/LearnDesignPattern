# Builder
add_subdirectory(BuilderFacets)
set(Build_SOURCE "Builder.cpp")
set(GroBuilder_SOURCE "GroovyStyleBuilder.cpp")
add_executable (BuilderProgram ${Build_SOURCE})
add_executable (GroBuilderProgram ${GroBuilder_SOURCE})