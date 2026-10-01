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
add_executable(Exercicio4
        Fundamentos/Ex004/Livro.cpp
        Fundamentos/Ex004/Livro.h
        Fundamentos/Ex004/main.cpp)
add_executable(Exercicio5
        Fundamentos/Ex005/Gamer.cpp
        Fundamentos/Ex005/Gamer.h
        Fundamentos/Ex005/main.cpp)
add_executable(Exercicio6
        Fundamentos/Ex006/Caneta.cpp
        Fundamentos/Ex006/Caneta.h
        Fundamentos/Ex006/main.cpp
)
add_executable(Exercicio7
        Fundamentos/Ex007/ControleRemoto.cpp
        Fundamentos/Ex007/ControleRemoto.h
        Fundamentos/Ex007/main.cpp)
add_executable(Exercicio8
        "Abstração e Herança/Ex001/Poligono.cpp"
        "Abstração e Herança/Ex001/Poligono.h"
        "Abstração e Herança/Ex001/main.cpp")
add_executable(Exercicio9
        "Abstração e Herança/Ex002/BebidaQuente.cpp"
        "Abstração e Herança/Ex002/BebidaQuente.h"
        "Abstração e Herança/Ex002/main.cpp")
add_executable(Exercicio10
        "Abstração e Herança/Ex003/Transporte.cpp"
        "Abstração e Herança/Ex003/Transporte.h"
        "Abstração e Herança/Ex003/main.cpp")
add_executable(Exercicio11
        "Abstração e Herança/Ex004/Funcionario.cpp"
        "Abstração e Herança/Ex004/Funcionario.h"
        "Abstração e Herança/Ex004/main.cpp")
add_executable(Exercicio12
        "Abstração e Herança/Ex005/Personagem.cpp"
        "Abstração e Herança/Ex005/Personagem.h"
        "Abstração e Herança/Ex005/main.cpp")
add_executable(Exercicio13 Encapsulamento/Ex001/Termostato.cpp Encapsulamento/Ex001/Termostato.h
        Encapsulamento/Ex001/main.cpp)
add_executable(Exercicio14 Encapsulamento/Ex002/Diario.cpp Encapsulamento/Ex002/Diario.h
        Encapsulamento/Ex002/main.cpp)
add_executable(Exercicio15 Encapsulamento/Ex003/Credencial.cpp Encapsulamento/Ex003/Credencial.h
        Encapsulamento/Ex003/main.cpp)
add_executable(Exercicio16 Encapsulamento/Ex004/Retangulo.cpp Encapsulamento/Ex004/Retangulo.h
        Encapsulamento/Ex004/main.cpp)
add_executable(Exercicio17 Encapsulamento/Ex005/ContaBancaria.cpp Encapsulamento/Ex005/ContaBancaria.h
        Encapsulamento/Ex005/main.cpp)
add_executable(Exercicio18 Encapsulamento/Ex006/Pessoa.cpp Encapsulamento/Ex006/Pessoa.h
        Encapsulamento/Ex006/main.cpp)
add_executable(Exercicio19 Polimorfismo/Ex001/Funcionario.cpp Polimorfismo/Ex001/Funcionario.h
        Polimorfismo/Ex001/main.cpp)
