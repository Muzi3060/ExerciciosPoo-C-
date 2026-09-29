//
// Created by fabio on 29/09/2026.
//

#include "Personagem.h"
#include <random>
#include <iostream>
#include <algorithm> // para std::min

// Função auxiliar global para evitar repetição do mesmo código
inline int randint(int min, int max) {
    if (min > max) std::swap(min, max); // Proteção extra contra intervalo inválido
    static std::mt19937 gen(std::random_device{}());
    return std::uniform_int_distribution<int>{min, max}(gen);
}

void Personagem::atacar(Personagem& alvo, int forca) {
    if (golpes.empty()) return;

    // Sorteia um índice válido do vetor de golpes
    int indice = randint(0, static_cast<int>(golpes.size()) - 1);
    std::string golpe = golpes[indice];

    std::cout << getNome() << " atacou " << alvo.getNome()
              << " com " << golpe << " de força " << forca << std::endl;

    alvo.receberDano(forca);
}

void Personagem::receberDano(int dano) {
    // Garante que o mínimo nunca seja maior que o dano recebido
    int calculoDano = randint(1, dano);
    vida -= calculoDano;

    std::cout << getNome() << " recebeu dano de " << calculoDano << std::endl;
}

Guerreiro::Guerreiro(std::string nome, int vida)
    : Personagem(nome, vida) {
    golpes = {"Soco plasmatico", "Chute de energia", "Raio laser", "Explosão de fogo"};
}

void Guerreiro::curar() {
    int calculoVida = randint(0, 100);
    vida += calculoVida;

    std::cout << getNome() << " curou " << calculoVida
              << " pontos de vida usando uma poção de cura " << std::endl;
}

Mago::Mago(std::string nome, int vida)
    : Personagem(nome, vida) {
    golpes = {"Magia de fogo", "Magia de gelo", "Magia de trovão", "Magia de vento"};
}

void Mago::curar() {
    int calculoVida = randint(250, 500);
    vida += calculoVida;

    std::cout << getNome() << " curou " << calculoVida
              << " pontos de vida usando uma magia de cura " << std::endl;
}