//
// Created by fabio on 30/09/2026.
//
#include <iostream>
#include "Credencial.h"

int main()
{
    std::cout << "Criação da credencial..." << std::endl;

    Credencial credencial("Murilo");
    std::cout << "senha: " << credencial.getSenha() << std::endl;
    credencial.validar("Murilo");
    std::cout << "Hash da senha: " << credencial.getHashSenha() << std::endl;



    return 0;
}