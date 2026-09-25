//
// Created by fabio on 25/09/2026.
//

#ifndef EXERCICIOSPOO_FUNCIONARIO_H
#define EXERCICIOSPOO_FUNCIONARIO_H
#include <string>

class Funcionario
{
private:
    std::string nome;
    std::string setor;
    std::string cargo;

public:
    Funcionario(std::string nome, std::string setor, std::string cargo);
    void apresentar();
};


#endif //EXERCICIOSPOO_FUNCIONARIO_H
