//
// Created by fabio on 03/10/2026.
//

#ifndef EXERCICIOSPOO_CARRINHO_H
#define EXERCICIOSPOO_CARRINHO_H
#include <string>
#include <vector>
#include <iostream>
#include <iomanip>
#include <ios>


class Produto
{
protected:
    std::string nome;
    double preco;
public:
    Produto(std::string nome, double preco);
    double getPreco() const { return preco; }
    friend std::ostream& operator<<(std::ostream& os, const Produto& produto);
};


class Carrinho
{
protected:
    std::vector<Produto> produtos;
public:
    Carrinho() = default;
    Carrinho operator+(const Produto& produto);
    Carrinho operator+(const Carrinho& carrinho);
    friend std::ostream& operator<<(std::ostream& os, const Carrinho& carrinho);
};




#endif //EXERCICIOSPOO_CARRINHO_H
