//
// Created by fabio on 30/09/2026.
//


#include "Retangulo.h"
#include <iostream>


int main()
{

    Retangulo retangulo;

    retangulo.setMedidas(8, 4);


    std::cout << retangulo.getArea() << std::endl;

    return 0;
}