//
// Created by fabio on 28/09/2026.
//

#ifndef EXERCICIOSPOO_TRANSPORTE_H
#define EXERCICIOSPOO_TRANSPORTE_H


class Transporte
{
protected:
    int distancia;
    float frete = 0.0f;
public:
    // Construtor na classe pai igual o "super(distancia)" do Java
    Transporte(int distancia) : distancia(distancia) {}

    virtual ~Transporte() = default;
    virtual void calcularFrete() = 0;
    float getFrete() const { return frete; }
    int getDistancia() const { return distancia; }
};

class Moto : public Transporte
{
private:
    static constexpr float TAXA_FRETE_MOTO = 0.50f;
public:
    Moto(int distancia);
    void calcularFrete() override;
};

class Caminhao : public Transporte
{
private:
    static constexpr float TAXA_FRETE_CAMINHAO = 1.20f;
public:
    Caminhao(int distancia);
    void calcularFrete() override;
};

class Drone : public Transporte
{
private:
    static constexpr float TAXA_FRETE_DRONE = 9.50f;
public:
    Drone(int distancia);
    void calcularFrete() override;
};



#endif //EXERCICIOSPOO_TRANSPORTE_H
