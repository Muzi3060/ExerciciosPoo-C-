cmake_minimum_required(VERSION 4.3)
project(ExerciciosPoo)

set(CMAKE_CXX_STANDARD 20)

add_executable(ExerciciosPoo
        Fundamentos/Ex001/Funcionario.cpp
        Fundamentos/Ex001/Funcionario.h
        Fundamentos/Ex001/main.cpp)
add_executable(Exercicio2
        Fundamentos/Ex002/Produto.cpp
        Fundamentos/Ex002/Produto.h
        Fundamentos/Ex002/main.cpp)
add_executable(Exercicio3
        Fundamentos/Ex003/Churrasco.cpp
        Fundamentos/Ex003/Churrasco.h
        Fundamentos/Ex003/main.cpp)
