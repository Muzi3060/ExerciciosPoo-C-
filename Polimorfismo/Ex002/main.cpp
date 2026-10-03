//
// Created by fabio on 02/10/2026.
//



#include "Arquivo.h"

int main()
{

    DOC doc("prova", 250.000);

    doc.abrir();

    std::cout << "Nome completo: " << doc.getNomeCompleto() << std::endl;

    PDF pdf("contrato", 1300.000);

    pdf.abrir();
    std::cout << "Nome completo: " << pdf.getNomeCompleto() << std::endl;



    return 0;
}