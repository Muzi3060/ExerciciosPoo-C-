//
// Created by fabio on 02/10/2026.
//

#include "Arquivo.h"



PDF::PDF(std::string nome, double tamanho)
    : Arquivo(nome, tamanho)
{
    extensao = "pdf";
}


DOC::DOC(std::string nome, double tamanho)
    : Arquivo(nome, tamanho)
{
    extensao = "doc";
}

void PDF::abrir()
{
    std::cout << "Abrindo arquivo " << getNomeCompleto() << " no Adobe Reader" << std::endl;
};

void DOC::abrir()
{
    std::cout << "Abrindo arquivo " << getNomeCompleto() << " no Microsoft Word" << std::endl;
}

std::string Arquivo::getNomeCompleto()
{
    return nome + "." + extensao + "(" + getTamanhoFormatado() + ")";
};
