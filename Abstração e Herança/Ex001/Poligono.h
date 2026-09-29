//
// Created by fabio on 28/09/2026.
//

#ifndef EXERCICIOSPOO_POLIGONO_H
#define EXERCICIOSPOO_POLIGONO_H


class Poligono
{
protected:
    float qtdLados = 4;

public:
    virtual ~Poligono() = default;
    virtual float perimetro() = 0;
    virtual float area() = 0;

};

class Quadrado : public Poligono
{
protected:
    float lado;

public:
    Quadrado(int lado);
    float perimetro() override;
    float area() override;
};

class Circulo : public Poligono
{
protected:
    float raio;

public:
    Circulo(int raio);
    float perimetro() override;
    float area() override;
};

#endif //EXERCICIOSPOO_POLIGONO_H
