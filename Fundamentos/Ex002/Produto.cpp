//
// Created by fabio on 25/09/2026.
//

#include "Produto.h"

#include <iomanip>
#include <iostream>

Produto::Produto(std::string nome, float preco)
    : nome(nome), preco(preco)
{
    etiqueta();
}

void Produto::etiqueta()
{
    std::cout << "Produto: " << nome << "\nPreço: " << std::fixed << std::setprecision(2) << preco << "\n========" << std::endl;
}
