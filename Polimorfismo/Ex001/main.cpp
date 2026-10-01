//
// Created by fabio on 01/10/2026.
//


#include "Funcionario.h"


int main()
{

    Gerente gerente("Carlos", 1800);
    Desenvolvedor desenvolvedor("Ana", 1800);
    Designer designer("Beatriz", 1800);

    gerente.setSalario(3000);
    desenvolvedor.setSalario(3000);
    designer.setSalario(2000);

    std::cout << "\nNovo salário Gerente:" << gerente.getSalario() << std::endl;
    std::cout << "Novo salário Desenvolvedor:" << desenvolvedor.getSalario() << std::endl;
    std::cout << "Novo salário Designer:" << designer.getSalario() << std::endl;


    return 0;
}