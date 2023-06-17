# Factory
add_subdirectory(AbstarctFactory)

set(Factory_SOURCE "Factory.cpp")
set(FactoryMethod_SOURCE "FactoryMethod.cpp")
set(InnerFactory_SOURCE "InnerFactory.cpp")
add_executable(FactoryProgram ${Factory_SOURCE})
add_executable(FactoryMethodProgram ${FactoryMethod_SOURCE})
add_executable(InnerFactoryProgram ${InnerFactory_SOURCE})
