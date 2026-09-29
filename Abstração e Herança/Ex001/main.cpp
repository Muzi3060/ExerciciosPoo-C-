//
// Created by fabio on 28/09/2026.
//

#include <iostream>
#include "Poligono.h"


int main()
{

    Circulo circulo(20 );
    Quadrado quadrado(12);

    std::cout << "Perimetro do circulo: " << circulo.perimetro() << std::endl;
    std::cout << "Area do circulo: " << circulo.area() << std::endl;

    std::cout << "Perimetro do quadrado: " << quadrado.perimetro() << std::endl;
    std::cout << "Area do quadrado: " << quadrado.area() << std::endl;

    return 0;
}