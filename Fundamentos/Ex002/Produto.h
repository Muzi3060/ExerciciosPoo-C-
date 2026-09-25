//
// Created by fabio on 25/09/2026.
//

#ifndef EXERCICIOSPOO_PRODUTO_H
#define EXERCICIOSPOO_PRODUTO_H
#include <string>

class Produto
{
private:
    std::string nome;
    float preco;

public:
    Produto(std::string nome, float preco);
    void etiqueta();
};


#endif //EXERCICIOSPOO_PRODUTO_H
