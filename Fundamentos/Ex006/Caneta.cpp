//
// Created by fabio on 26/09/2026.
//

#include "Caneta.h"
#include <iostream>
#include <map>

Caneta::Caneta(std::string cor) : cor(cor)
{
    selecionarCor(cor);
}


std::string Caneta::selecionarCor(std::string novaCor)
{

    std::map<std::string, std::string> cores = {
        {"azul", "\033[34m"},
        {"vermelha", "\033[31m"},
        {"verde", "\033[32m"},
        {"default", "\033[0m"}
    };

    if (cores.find(novaCor) != cores.end()) {

        /* Se lê como: se o resultado da busca for diferente do marcador de 'não achei nada'
         * então achou de verdade. Ou seja, a chave existe no map.
         *
         * isso é parecido, conceitualmente com como você já entendeu o '-1' que algumas linguagens usam para indicar que não encontrou nada.
         * só que aqui, em vez de um número, é um 'iterador especial' reservado para esse propósito.
         * */

        cor = cores[novaCor];
    } else {
        std::cout << "Cor inválida. Mantendo a cor atual." << std::endl;
    }

    return cor;
}

void Caneta::escrever(std::string msg)
{

    if (!tampada) {
        std::string resultado = cor + msg + "\033[0m";
        std::cout << resultado << std::endl;
    } else {
        std::cout << "\033[31mA caneta está tampada. Não é possível escrever.\033[0m" << std::endl;
    }
}

void Caneta::tampar()
{
    tampada = true;
}

void Caneta::destampar()
{
    tampada = false;
}

