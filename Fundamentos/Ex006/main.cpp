//
// Created by fabio on 26/09/2026.
//

#include "Caneta.h"


int main()
{

    Caneta caneta("azul");
    caneta.destampar();
    caneta.escrever("Teste");
    caneta.tampar();
    caneta.escrever("Escrevendo com a caneta azul");
    caneta.destampar();
    caneta.escrever("Escrevendo com a caneta azul novamente");

    return 0;
}