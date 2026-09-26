//
// Created by fabio on 26/09/2026.
//

#include "Gamer.h"

int main()
{

    Gamer gamer1("Murilo", "Muzi");

    gamer1.adicionarJogoFavorito("League of Legends");
    gamer1.adicionarJogoFavorito("Counter Strike");
    gamer1.adicionarJogoFavorito("Valorant");
    gamer1.adicionarJogoFavorito("GTA V");

    gamer1.mostrarFicha();


    return 0;
}
