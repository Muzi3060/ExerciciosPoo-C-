//
// Created by fabio on 25/09/2026.
//

#include "Churrasco.h"
#include <iostream>

Churrasco::Churrasco(std::string titulo, int quantidadePessoas)
    : titulo(titulo), quantidadePessoas(quantidadePessoas)
{
    mensagem();
}

/* Consumo padrão 400g por pessoa
 * Preço: R$ 82.40/kg
 */

float Churrasco::calcularCarne()
{

    return 0.4 * quantidadePessoas;

}

float Churrasco::calcularCustoTotal()
{
    float quantidadeCarne = calcularCarne();
    float precoKg = 82.40;
    return precoKg * quantidadeCarne;
}

float Churrasco::calcularPrecoPorPessoa()
{
    float custoTotal = calcularCustoTotal();
    return custoTotal / quantidadePessoas;
}

void Churrasco::mensagem()
{
    std::cout << "Analisando " << titulo << " com " << quantidadePessoas << " convidados" << std::endl;
    std::cout << "Cada participante comerá 0.4kg e cada Kg custará R$82.40" << std::endl;
    std::cout << "Recomendo comprar " << calcularCarne() << "Kg de carne" << std::endl;
    std::cout << "O custo total será de R$" << calcularCustoTotal() << std::endl;
    std::cout << "Cada pessoa pagará R$" << calcularPrecoPorPessoa() << " Para participar." << std::endl;
}