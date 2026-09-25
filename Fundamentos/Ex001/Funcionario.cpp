//
// Created by fabio on 25/09/2026.
//

#include "Funcionario.h"
#include <iostream>

Funcionario::Funcionario(std::string nome, std::string setor, std::string cargo)
    : nome(nome), setor(setor), cargo(cargo)
{
    apresentar();
}

void Funcionario::apresentar()
{
    std::cout << "Olá, sou " << nome << " e sou " << cargo << " do setor de " << setor << " da empresa Curso em Vídeo"
        << std::endl;
}
