//
// Created by fabio on 30/09/2026.
//

#ifndef EXERCICIOSPOO_DIARIO_H
#define EXERCICIOSPOO_DIARIO_H
#include <vector>
#include <string>


class Diario
{
private:
    std::vector<std::string> segredos;
    std::string senha;
public:
    void escrever(std::string msg);
    void ler(std::string senha);
    Diario(std::string senha);
};


#endif //EXERCICIOSPOO_DIARIO_H
