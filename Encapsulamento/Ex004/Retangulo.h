//
// Created by fabio on 30/09/2026.
//

#ifndef EXERCICIOSPOO_RETANGULO_H
#define EXERCICIOSPOO_RETANGULO_H
#include <tuple>

class Retangulo
{
protected:
    float base;
    float altura;
    float area;
public:
    Retangulo(float base = 0, float altura = 0);
    void setBase(float base);
    void setAltura(float altura);
    float getArea();
    void setMedidas(float base, float altura);

    std::tuple<float, float> getMedidas() const; // Podemos usar tuple como tipo de retorno
};


#endif //EXERCICIOSPOO_RETANGULO_H
