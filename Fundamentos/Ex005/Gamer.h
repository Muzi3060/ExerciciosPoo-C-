//
// Created by fabio on 26/09/2026.
//

#ifndef EXERCICIOSPOO_GAMER_H
#define EXERCICIOSPOO_GAMER_H
#include <string>
#include <vector>

class Gamer
{
private:
    std::string nome;
    std::string nick;
    std::vector<std::string> jogosFavoritos;
public:
    Gamer(std::string nome, std::string nick);
    void mostrarFicha();
    void adicionarJogoFavorito(std::string jogo);
};


#endif //EXERCICIOSPOO_GAMER_H
