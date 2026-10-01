//
// Created by fabio on 01/10/2026.
//

#include "ContaBancaria.h"


ContaBancaria::ContaBancaria(int id, std::string titular, float saldo, std::string senhaConta)
    : id(id), titular(titular), saldo(saldo), hashSenha(gerarHash(senhaConta))
{
}


std::string ContaBancaria::gerarHash(std::string senhaNova)
{
    std::string hashResultado = picosha2::hash256_hex_string(senhaNova);
    return hashResultado;
}

void ContaBancaria::sacar(float valor, std::string chave)
{
    std::string hashChave = picosha2::hash256_hex_string(chave);

    if (hashChave == hashSenha && valor <= saldo){
        std::cout << "Saque no valor " << valor << " realizado com sucesso!" << std::endl;
        saldo -= valor;
    } else if (hashChave == hashSenha && valor > saldo){
        std::cout << "Acesso negado! Saldo insuficiente." << std::endl;
    } else {
        std::cout << "Acesso negado! Senha incorreta." << std::endl;
    }
}

void ContaBancaria::depositar(float valor)
{
    if (valor <= 0) {
        std::cout << "Valor de depósito inválido." << std::endl;
    } else{
        std::cout << "Deposito no valor " << valor << " realizado com sucesso!" << std::endl;
        saldo += valor;
    }
}
