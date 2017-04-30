cmake_minimum_required(VERSION 3.8) 
set(CMAKE_PREFIX_PATH /usr/local/Cellar/llvm/4.0.0_1/lib/cmake/llvm/)
set (CMAKE_CXX_STANDARD 14)

project(llvm_test)
find_package(LLVM)

include_directories(/usr/local/Cellar/llvm/4.0.0_1/include/)
link_directories(/usr/local/Cellar/llvm/4.0.0_1/lib/)
file(GLOB sources src/*.cpp)

add_executable(app ${sources})
#target_link_libraries(app LLVMCore LLVMExecutionEngine LLVMInterpreter LLVMMC)
target_link_libraries(app LLVMCore)

