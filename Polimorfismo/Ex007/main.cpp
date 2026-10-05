//
// Created by fabio on 05/10/2026.
//

#include "Classes.h"

int main()
{

    Aluno aluno("João", "Engenharia", "3º");
    Usuario usuario("Maria", "maria@gmail.com");

    JSON json;

    std::cout << "Aluno em JSON: " << json.exportar(aluno) << std::endl;
    std::cout << "Usuario em JSON: " << json.exportar(usuario) << std::endl;




    return 0;
}