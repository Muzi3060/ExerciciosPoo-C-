//
// Created by fabio on 30/09/2026.
//


#include "Termostato.h"
#include "iostream"


int main()
{
    std::cout << "Temperatura inicial: \n";
    Termostato termostato;
    std::cout << "Temperatura antes do ajuste " << termostato.getTemperatura() << std::endl;
    termostato.setTemperatura(25.5f);
    std::cout << "Temperatura após ajuste: " << termostato.getTemperatura() << std::endl;

    return 0;
}