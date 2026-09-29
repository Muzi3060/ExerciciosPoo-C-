//
// Created by fabio on 29/09/2026.
//

#include "Personagem.h"
#include <iostream>

int main() {
    Guerreiro guerreiro("Aragorn", 2000);
    Mago mago("Merlim", 2000);

    guerreiro.atacar(mago, 1000);
    std::cout << "Vida de " << mago.getNome() << ": " << mago.getVida() << std::endl;

    return 0;
}
