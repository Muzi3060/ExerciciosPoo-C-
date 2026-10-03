//
// Created by fabio on 03/10/2026.
//

#ifndef EXERCICIOSPOO_VALIDAR_H
#define EXERCICIOSPOO_VALIDAR_H

#include <string>
#include <regex>
#include <iostream>

class Validar
{
public:
    Validar() = default;
    virtual void validar() = 0;
};

class Usuario : public Validar
{
private:
    std::string valor;
public:
    Usuario(std::string valor);
    void validar() override;
};

class Email : public Validar
{
private:
    std::string valor;
public:
    Email(std::string valor);
    void validar() override;
};

class Senha : public Validar
{
private:
    std::string valor;
public:
    Senha(std::string valor);
    void validar() override;
};


#endif //EXERCICIOSPOO_VALIDAR_H
