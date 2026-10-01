//
// Created by fabio on 01/10/2026.
//

#ifndef EXERCICIOSPOO_FUNCIONARIO_H
#define EXERCICIOSPOO_FUNCIONARIO_H
#include <string>
#include <iostream>


class Funcionario
{
private:
    std::string nome;
protected:
    float salario;
public:
    virtual ~Funcionario() = default;
    virtual float calcularBonus() = 0;

    float getSalario() const { return salario;}
    void setSalario(float salario);
    Funcionario(std::string nome, float salario) : nome(nome), salario(salario) {}

};

class Gerente : public Funcionario
{
private:
    float calcularBonus() override;

public:
    Gerente(std::string nome, float salario);
};

class Designer : public Funcionario
{
private:
    float calcularBonus() override;

public:
    Designer(std::string nome, float salario);
};

class Desenvolvedor : public Funcionario
{
private:
    float calcularBonus() override;

public:
    Desenvolvedor(std::string nome, float salario);
};


#endif //EXERCICIOSPOO_FUNCIONARIO_H
