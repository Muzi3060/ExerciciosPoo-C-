//
// Created by fabio on 03/10/2026.
//

#include "Carrinho.h"


Produto::Produto(std::string nome, double preco)
    : nome(nome), preco(preco)
{

}

Carrinho Carrinho::operator+(const Produto& produto)
{
    produtos.push_back(produto); // adiciona o produto na lista de "quem chamou o método" (c1)
    return *this; // devolve o OBJETO c1 (não o endereço dele), já atualizado
}

Carrinho Carrinho::operator+(const Carrinho& carrinho)
{
    produtos.insert(produtos.end(), carrinho.produtos.begin(), carrinho.produtos.end());
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Produto& produto)
{
    os << produto.nome << " - R$ " << std::fixed << std::setprecision(2) << produto.preco;
    return os;

}

std::ostream& operator<<(std::ostream& os, const Carrinho& carrinho)
{
    std::string linhaTracejada = "----------------------------------------\n";
    os << linhaTracejada;

    double valorTotal = 0.0;
    for (const auto& produto : carrinho.produtos)
    {
        os << produto << "\n";
        valorTotal += produto.getPreco();
    }

    os << linhaTracejada;
    os << "Total: R$ " << std::fixed << std::setprecision(2) << valorTotal << "\n";

    return os;
}

