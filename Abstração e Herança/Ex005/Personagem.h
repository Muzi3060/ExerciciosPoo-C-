//
// Created by fabio on 29/09/2026.
//

#ifndef EXERCICIOSPOO_PERSONAGEM_H
#define EXERCICIOSPOO_PERSONAGEM_H
#include <string>
#include <vector>

class Personagem
{
private:
    std::string nome;
    void receberDano(int dano);
protected:
    int vida;
    std::vector<std::string> golpes;
public:
    Personagem(std::string nome, int vida) : nome(nome), vida(vida) {}
    virtual ~Personagem() = default;

    void atacar(Personagem& alvo, int forca);
    void virtual curar() = 0;
    std::string getNome() const { return nome; }
    int getVida() const { return vida; }


};

class Guerreiro : public Personagem
{
public:
    Guerreiro(std::string nome, int vida);
    void curar() override;
};

class Mago : public Personagem
{
public:
    void curar() override;
    Mago(std::string nome, int vida);
};


#endif //EXERCICIOSPOO_PERSONAGEM_H
