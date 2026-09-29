//
// Created by fabio on 28/09/2026.
//

#ifndef EXERCICIOSPOO_FUNCIONARIO_H
#define EXERCICIOSPOO_FUNCIONARIO_H
#include <string>

class Funcionario
{
private:
    float calcSalariosMinimos();
    void virtual calcSalario() = 0;
protected:
    std::string nome;
    float salarioBruto;
    float salario = 0.0f;
    int salarioMinimo = 1612;
    float inss = 0.075f;
    void analisarSalario();
public:
    Funcionario(std::string nome, float salarioBruto) : nome(nome), salarioBruto(salarioBruto) {}
    virtual ~Funcionario() = default;
    float getSalario() const { return salario;  }
};

class Horista : public Funcionario
{
private:
    int valorHora;
    int horasTrabalhadas;
    void calcSalario() override;
public:
    Horista(std::string nome, int valorHora, int horasTrabalhadas);
};

class Mensalista : public Funcionario
{
private:
    void calcSalario() override;
public:
    Mensalista(std::string nome, float salarioBruto);
};


#endif //EXERCICIOSPOO_FUNCIONARIO_H
