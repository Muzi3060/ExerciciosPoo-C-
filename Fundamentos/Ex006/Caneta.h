//
// Created by fabio on 26/09/2026.
//

#ifndef EXERCICIOSPOO_CANETA_H
#define EXERCICIOSPOO_CANETA_H
#include <string>

class Caneta
{
private:
    std::string cor;
    bool tampada = true;
public:
    void escrever(std::string msg);
    void tampar();
    void destampar();
    std::string selecionarCor(std::string novaCor);
    Caneta(std::string cor);
};


#endif //EXERCICIOSPOO_CANETA_H
