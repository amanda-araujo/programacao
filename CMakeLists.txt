cmake_minimum_required(VERSION 3.16)
project(programacao)

set(CMAKE_CXX_STANDARD 17)

# Adiciona subdiretórios com CMakeLists.txt próprios
add_subdirectory(P05_PointersDynamicMemory)
add_subdirectory(P06_StringsVectorsTemplateFunctions)
add_subdirectory(P07_StreamBasedInputOutput)
add_subdirectory(tests)
add_executable(test7 Tests/test7.cpp)
add_subdirectory(P8_Classes)
add_executable(date3 P8_Classes/date3.cpp)
add_executable(test8 Tests/test8.cpp)
add_subdirectory(P09_SeparateCompilation-ClassTemplates)
add_executable(Color P09_SeparateCompilation-ClassTemplates/Color.cpp)
add_executable(Polygon P09_SeparateCompilation-ClassTemplates/Polygon.cpp P09_SeparateCompilation-ClassTemplates/Polygon.h)
add_subdirectory(P10_ClassInheritance)
add_executable(test10 Tests/test10.cpp)
#add_subdirectory(P11_StandardTemplateLibrary) # silenciar count-words.cpp repetido
add_executable(test11 Tests/test11.cpp)
add_subdirectory(P12_UsingSTL)
add_executable(test12 Tests/test12.cpp)
