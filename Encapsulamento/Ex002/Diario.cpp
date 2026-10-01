//
// Created by fabio on 30/09/2026.
//

#include "Diario.h"
#include <string>
#include <iostream>

Diario::Diario(std::string senha)
    : senha(senha){
}

void Diario::escrever(std::string msg){
    segredos.push_back(msg);
}

void Diario::ler(std::string senha){
    if (senha == this -> senha){
        for (const auto& segredo : segredos){
            std::cout << "Mensagem: " << segredo << std::endl;
        }
    } else{
        std::cout << "Senha incorreta!" << std::endl;
    }
}