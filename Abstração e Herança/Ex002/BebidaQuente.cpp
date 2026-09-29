//
// Created by fabio on 28/09/2026.
//

#include "BebidaQuente.h"
#include <iostream>

void BebidaQuente::preparar(){
    std::cout << "--- Iniciando o Preparo ---" << std::endl;
    ferverAgua();
    misturar();
    servir();
    finalizarPreparo();
}
void BebidaQuente::ferverAgua(){
    std::cout << "1. Fervendo água a 100 graus Celsius." << std::endl;
}

void BebidaQuente::finalizarPreparo(){
    std::cout << "--- Preparo Finalizado ---" << std::endl;
}

void Cafe::misturar(){
    std::cout << "2. Passando água pressurizada pelo pó de café moído." << std::endl;
}
void Cafe::servir(){
    std::cout << "3. Servindo o café em uma xicara pequena." << std::endl;
}

void Cha::misturar(){
    std::cout << "2. Mergulhando o sachê de ervas na água." << std::endl;
}
void Cha::servir(){
    std::cout << "3. Servindo na caneca de porcelana com limão." << std::endl;
}

void Leite::misturar(){
    std::cout << "2. Passando vapor pressurizado pelo bico de leite." << std::endl;
}
void Leite::servir(){
    std::cout << "3. Servindo na caneca grande, já com café." << std::endl;
}