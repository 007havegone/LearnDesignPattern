# Singleton
add_executable(MultitionProgram "Multiton.cpp")
add_executable(SingletonLifeProgram "SingletonLife.cpp")
target_link_libraries(SingletonLifeProgram PRIVATE ${Boost_LIBRARIES})
target_include_directories(SingletonLifeProgram PRIVATE ${BEXT_DI_INCLUDE_DIRS} ${Boost_INCLUDE_DIRS})


# enable the google test suit
add_executable(SingletonProgram "Singleton.hpp" "SingletonTests.cpp")    
target_link_libraries(SingletonProgram PRIVATE GTest::gtest GTest::gtest_main GTest::gmock GTest::gmock_main)
add_test(AllTestsInMain SingletonProgram)