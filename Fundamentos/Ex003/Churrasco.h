//
// Created by fabio on 25/09/2026.
//

#ifndef EXERCICIOSPOO_CHURRASCO_H
#define EXERCICIOSPOO_CHURRASCO_H
#include <string>

class Churrasco
{
private:
    int quantidadePessoas;
    std::string titulo;

public:
    Churrasco(std::string titulo, int quantidadePessoas);
    float calcularCarne();
    float calcularCustoTotal();
    float calcularPrecoPorPessoa();
    void mensagem();
};


#endif //EXERCICIOSPOO_CHURRASCO_H
