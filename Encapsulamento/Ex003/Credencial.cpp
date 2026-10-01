//
// Created by fabio on 30/09/2026.
//

#include "Credencial.h"
#include "picosha2.h"
#include <iostream>

Credencial::Credencial(std::string senha)
    : senha(senha)
{
    std::string hashResultado = picosha2::hash256_hex_string(senha);

    hashSenha = hashResultado;
}

void Credencial::validar(std::string chave)
{
    std::string hashChave = picosha2::hash256_hex_string(chave);

    if (hashChave == hashSenha){
        std::cout << "Bem vindo(a)! Senha correta." << std::endl;
    } else{
        std::cout << "Acesso negado! Senha incorreta." << std::endl;
    }
}