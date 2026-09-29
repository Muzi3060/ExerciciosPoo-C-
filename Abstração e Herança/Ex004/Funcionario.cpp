//
// Created by fabio on 28/09/2026.
//

#include "Funcionario.h"
#include "iostream"


Horista::Horista(std:: string nome, int valorHora, int horasTrabalhadas)
    : Funcionario(nome, 0), valorHora(valorHora), horasTrabalhadas(horasTrabalhadas)
{
    calcSalario();
    analisarSalario();
}

void Horista::calcSalario()
{
    salarioBruto = valorHora * horasTrabalhadas;
    float salarioLiquido = salarioBruto - (salarioBruto * inss);
    salario = salarioLiquido;
}

void Funcionario::analisarSalario()
{
    std::cout << "Calculando salário...\n" << std::endl;
    std::cout << "Analise de Salário\n";
    std::cout << "O salario de " << nome << " é de R$"
    << getSalario() <<  " e corresponde a " << calcSalariosMinimos() << " salários mínimos.\n" << std::endl;
}

float Funcionario::calcSalariosMinimos()
{
    return getSalario() / salarioMinimo;
}

Mensalista::Mensalista(std::string nome, float salarioBruto)
    : Funcionario(nome, salarioBruto)
{
    calcSalario();
    analisarSalario();
}

void Mensalista::calcSalario()
{
    salario = salarioBruto - (salarioBruto * inss);
}

