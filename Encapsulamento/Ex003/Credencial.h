//
// Created by fabio on 30/09/2026.
//

#ifndef EXERCICIOSPOO_CREDENCIAL_H
#define EXERCICIOSPOO_CREDENCIAL_H
#include <string>


class Credencial
{
private:
    std::string senha;
    std::string hashSenha;

public:
    void validar(std::string chave);
    std::string getSenha() {return senha; }
    std::string getHashSenha() {return hashSenha; }
    Credencial(std::string senha);

};


#endif //EXERCICIOSPOO_CREDENCIAL_H
