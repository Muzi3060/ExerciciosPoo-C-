//
// Created by fabio on 01/10/2026.
//

#include "Funcionario.h"

void Funcionario::setSalario(float salario)
{
    if (salario <= this -> salario){
        throw std::invalid_argument("Aumento salarial não pode ser menor ou igual ao atual");
    }
    this -> salario = salario;
}


Gerente::Gerente(std::string nome, float salario)
    : Funcionario(nome, salario){
    std::cout << nome << " ganha R$" << salario << " e por ser Gerente, o bonus será de R$" << calcularBonus() << std::endl;
}


float Gerente::calcularBonus(){
    return salario * 0.15;
}

Desenvolvedor::Desenvolvedor(std::string nome, float salario)
    : Funcionario(nome, salario)
{
    std::cout << nome << " ganha R$" << salario << " e por ser Desenvolvedor, o bonus será de R$" << calcularBonus() << std::endl;
}

float Desenvolvedor::calcularBonus(){
    return salario * 0.10;
}

Designer::Designer(std::string nome, float salario)
    : Funcionario(nome, salario)
{
    std::cout << nome << " ganha R$" << salario << " e por ser Designer, o bonus será de R$" << calcularBonus() << std::endl;
}

float Designer::calcularBonus(){
    return salario * 0.08;
}