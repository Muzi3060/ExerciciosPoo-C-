//
// Created by fabio on 02/10/2026.
//

#ifndef EXERCICIOSPOO_ARQUIVO_H
#define EXERCICIOSPOO_ARQUIVO_H
#include <format>
#include <string>
#include <iostream>

class Arquivo
{
private:
    std::string nome;
protected:
    std::string extensao;
    double tamanho;
public:
    virtual ~Arquivo() = default;
    void virtual abrir() = 0;
    Arquivo(std::string nome, double tamanho) : nome(nome), tamanho(tamanho) {}

    std::string getNomeCompleto();

    double getTamanho() const {return tamanho / 1000.0; } // Retorna o tamanho em MB

    std::string getTamanhoFormatado() const {
        return std::format("{:.2f}MB", getTamanho());
    }
};


class PDF : public Arquivo
{
public:
    PDF(std::string nome, double tamanho);
    void abrir() override;
};

class DOC : public Arquivo
{
public:
    DOC(std::string nome, double tamanho);
    void abrir() override;
};

#endif //EXERCICIOSPOO_ARQUIVO_H
