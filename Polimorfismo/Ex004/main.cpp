//
// Created by fabio on 03/10/2026.
//

#include "Mensagem.h"

int main() {
    Mensagem msg("Esta é uma mensagem");
    Erro err("Este é um erro");
    Aviso aviso("Este é um aviso");

    msg.mostrar();
    err.mostrar();
    aviso.mostrar();

    return 0;
}