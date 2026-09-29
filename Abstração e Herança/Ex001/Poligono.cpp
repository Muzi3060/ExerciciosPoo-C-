//
// Created by fabio on 28/09/2026.
//

#include "Poligono.h"


Quadrado::Quadrado(int lado) : lado(lado)
{
}

float Quadrado::perimetro()
{
    return qtdLados * lado;
}

float Quadrado::area()
{
    return lado * lado;
}

Circulo ::Circulo(int raio) : raio(raio)
{
}


float Circulo::perimetro()
{
    return 2 * 3.14 * raio;
}

float Circulo::area()
{
    return 3.14 * raio * raio;
}

