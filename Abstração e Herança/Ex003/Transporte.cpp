//
// Created by fabio on 28/09/2026.
//

#include "Transporte.h"
#include <stdexcept>

// Aqui ": Transporte(distancia)" é o equivalente exato ao "super(distancia)" do Java!
Moto::Moto(int distancia) : Transporte(distancia){
    calcularFrete();
}

void Moto::calcularFrete(){
    frete = distancia * TAXA_FRETE_MOTO;
}

Caminhao::Caminhao(int distancia) : Transporte(distancia){
    calcularFrete();
}

void Caminhao::calcularFrete(){
    if (distancia >= 50){
        frete = distancia * TAXA_FRETE_CAMINHAO;
    } else{
        throw std::runtime_error("Distância mínima para caminhão é de 50Km.");
    }
}

Drone::Drone(int distancia) : Transporte(distancia){
    calcularFrete();
}

void Drone::calcularFrete()
{
    if (distancia <= 10) {
        frete = distancia * TAXA_FRETE_DRONE;
    } else {
        throw std::runtime_error("Distância máxima para drone é de 10Km.");
    }
}
