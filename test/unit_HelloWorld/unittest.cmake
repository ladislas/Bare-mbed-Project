# Add here additional test specific include paths
set(unittest-includes ${unittest-includes}
  ../lib/HelloWorld
  ../lib/mbed-os/drivers
)

# Add here classes under test
set(unittest-sources
  # ../lib/HelloWorld/HelloWorld.cpp
)

# Add here test classes and stubs
set(unittest-test-sources
  ./unit_HelloWorld/test_HelloWorld.cpp
)
