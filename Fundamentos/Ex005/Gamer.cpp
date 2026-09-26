//
// Created by fabio on 26/09/2026.
//

#include "Gamer.h"
#include <iostream>

Gamer::Gamer(std::string nome, std::string nick) : nome(nome), nick(nick)
{
}

void Gamer::mostrarFicha()
{
    std::cout << "Jogador: " << nick << std::endl;
    std::cout << "Nome real: " << nome << std::endl;
    std::cout << "\nJOGOS FAVORITOS: " << std::endl;

    for (const auto& jogo : jogosFavoritos)
    {
        std::cout << jogo << std::endl;
    }
}

void Gamer::adicionarJogoFavorito(std::string nome)
{
    jogosFavoritos.push_back(nome);
}
