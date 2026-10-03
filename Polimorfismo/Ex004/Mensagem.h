//
// Created by fabio on 03/10/2026.
//

#ifndef EXERCICIOSPOO_MENSAGEM_H
#define EXERCICIOSPOO_MENSAGEM_H
#include <string>
#include <iostream>


class Mensagem
{
protected:
    std::string mensagem;
    std::string tipo;
    std::string icone;
public:
    Mensagem(std::string mensagem);
    void mostrar();
};

class Erro : public Mensagem
{
public:
    Erro(std::string mensagem);
};

class Aviso : public Mensagem
{
public:
    Aviso(std::string mensagem);
};


#endif //EXERCICIOSPOO_MENSAGEM_H
