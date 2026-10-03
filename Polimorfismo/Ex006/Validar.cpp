//
// Created by fabio on 03/10/2026.
//

#include "Validar.h"


Usuario::Usuario(std::string valor) : valor(valor)
{
    validar();
}

Email::Email(std::string valor) : valor(valor)
{
    validar();
}

Senha::Senha(std::string valor) : valor(valor)
{
    validar();
}

// de 5 a 20 caracteres, letras minusculas numeros e pode ter simbolo de sublinhado

void Usuario::validar()
{
    bool valido = std::regex_match(valor, std::regex("^[a-z0-9_]{5,20}$"));
    if (!valido) {
        throw std::invalid_argument("Usuario invalido: deve conter de 5 a 20 caracteres, letras minusculas, numeros e pode ter simbolo de sublinhado.");
    }

    std::cout << "Usuario valido" << std::endl;

}

// deve conter um unico @, usuario pode conter letras, numeros e alguns simbolos, os dominios contem pontos, o tld encerra com ponto e pelo menos 2 letras.

void Email::validar()
{
    bool valido = std::regex_match(valor, std::regex("^[\\w._%+-]+@[\\w.-]+\\.[a-zA-Z]{2,}$"));
    if (!valido) {
        throw std::invalid_argument("Email invalido: deve conter um unico @, usuario pode conter letras, numeros e alguns simbolos, os dominios contem pontos, o tld encerra com ponto e pelo menos 2 letras.");
    }

    std::cout << "Email valido" << std::endl;
}

// pelo menos 8 caracteres, pelo menos uma maiscula e pelo menos um simbolo

void Senha::validar()
{

    bool valido = std::regex_match(valor, std::regex("^(?=.*[A-Z])(?=.*[!@#$%^&*()_+\\-=\\[\\]{};':\"\\\\|,.<>/?]).{8,}$"));
    if (!valido) {
        throw std::invalid_argument("Senha invalida: deve conter pelo menos 8 caracteres, uma letra maiuscula e um simbolo.");
    }

    std::cout << "Senha valida" << std::endl;

}