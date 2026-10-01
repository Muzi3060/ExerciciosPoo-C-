//
// Created by fabio on 30/09/2026.
//

#include "Retangulo.h"
#include <tuple>

Retangulo::Retangulo(float base, float altura)
    : base(base), altura(altura) {}

float Retangulo::getArea(){
    area = base * altura;
    return area;
}

void Retangulo::setBase(float base){
    this -> base = base;
}

void Retangulo::setAltura(float altura){
    this -> altura = altura;
}

void Retangulo::setMedidas(float base, float altura){
    std::tuple<float, float> tupla(base, altura);

    auto [b, h] = tupla; // Aqui desempacotamos a tupla em duas variáveis b e h

    this -> base = b;
    this -> altura = h;
}

std::tuple<float, float> Retangulo::getMedidas() const
{
    return {base, altura};
}