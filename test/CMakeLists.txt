include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../src)
add_executable(BrainfuckTests BrainfuckTests.cpp MemoryTests.cpp)
target_link_libraries(BrainfuckTests brainfuck)
