//
// Created by fabio on 01/10/2026.
//


#include "ContaBancaria.h"

int main()
{
    std::string senhaConta;
    float valor;

    std::cout << "Criando a conta..." << std::endl;
    std::cout << "Digite a senha para criação da conta: ";

    std::cin >> senhaConta;

    ContaBancaria conta(123, "João", 1000.0, senhaConta);
    std::cout << "Conta criada com sucesso! Bem vindo(a) " << conta.getNome() << "!\n" << std::endl;

    std::cout << "Digite o valor para saque: ";
    std::cin >> valor;

    std::cout << "Digite sua senha novamente para sacar: ";
    std::cin >> senhaConta;

    conta.sacar(valor, senhaConta);
    std::cout << "Saldo após saque: " << conta.getSaldo() << std::endl;


    return 0;
}