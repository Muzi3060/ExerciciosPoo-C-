//
// Created by fabio on 01/10/2026.
//

#ifndef EXERCICIOSPOO_CONTABANCARIA_H
#define EXERCICIOSPOO_CONTABANCARIA_H
#include <string>
#include <iostream>
#include "picosha2.h"

class ContaBancaria
{
protected:
    int id;
    std::string titular;
private:
    float saldo;
    std::string hashSenha;
    std::string gerarHash(std::string senhaNova);
public:
    ContaBancaria(int id, std::string titular, float saldo, std::string senhaConta);

    std::string getNome() { return titular;}
    void sacar(float valor, std::string chave);
    void depositar(float valor);
    float getSaldo() { return saldo; }
};


#endif //EXERCICIOSPOO_CONTABANCARIA_H
