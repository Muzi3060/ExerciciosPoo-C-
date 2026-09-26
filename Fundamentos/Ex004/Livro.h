//
// Created by fabio on 26/09/2026.
//

#ifndef EXERCICIOSPOO_LIVRO_H
#define EXERCICIOSPOO_LIVRO_H
#include <string>


class Livro
{
private:
    std::string titulo;
    int totalPaginas;
    int paginaAtual = 1;

public:
    Livro(std::string titulo, int totalPaginas);
    int avancarPagina(int paginas);
    void verificarFim(int paginaAnterior);
};


#endif //EXERCICIOSPOO_LIVRO_H
