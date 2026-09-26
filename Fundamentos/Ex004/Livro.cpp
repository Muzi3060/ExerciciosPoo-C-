//
// Created by fabio on 26/09/2026.
//

#include "Livro.h"
#include <iostream>

Livro::Livro(std::string titulo, int totalPaginas)
    : titulo(titulo), totalPaginas(totalPaginas)
{
    std::cout << "Você está iniciando a leitura do livro \"" << titulo << "\".\n" << std::endl;
}

int Livro::avancarPagina(int paginas)
{
    int paginaAnterior = paginaAtual;
    paginaAtual += paginas;

    verificarFim(paginaAnterior);
    return paginaAtual;
}

void Livro::verificarFim(int paginaAnterior)
{
    if (paginaAtual >= totalPaginas)
    {
        int paginasAvancadas = totalPaginas - paginaAnterior;
        paginaAtual = totalPaginas;

        std::cout << "Você avançou " << paginasAvancadas
        << " página(s) e chegou ao final do livro!" << std::endl;
    } else {
        std::cout << "Você está na página " << paginaAtual
        << " do livro \"" << titulo << "\"." << std::endl;
    }
}