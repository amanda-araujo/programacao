cmake_minimum_required(VERSION 3.16)
project(programacao)

set(CMAKE_CXX_STANDARD 17)

# Adiciona subdiretórios com CMakeLists.txt próprios
add_subdirectory(P05_PointersDynamicMemory)
add_subdirectory(P06_StringsVectorsTemplateFunctions)
add_subdirectory(P07_StreamBasedInputOutput)
add_subdirectory(tests)
