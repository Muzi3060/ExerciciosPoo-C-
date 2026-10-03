//
// Created by fabio on 03/10/2026.
//

#include "Carrinho.h"

int main()
{

    Carrinho c1;

    Produto p1("Mouse gamer", 150.00);
    Produto p2("Teclado mecânico", 300.00);
    Produto p3("Monitor 4K", 1200.00);


    c1 = c1 + p1 + p2 + p3;

    Carrinho c2;

    Produto p4("Fone de ouvido", 200.00);
    Produto p5("Webcam HD", 250.00);

    c2 = c2 + p4 + p5;


    std::cout << c1 << std::endl;
    std::cout << c2 << std::endl;

    c2 = c2 + c1;

    std::cout << c2 << std::endl;

    return 0;
}