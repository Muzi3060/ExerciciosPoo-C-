//
// Created by fabio on 01/10/2026.
//

#ifndef EXERCICIOSPOO_PESSOA_H
#define EXERCICIOSPOO_PESSOA_H
#include <string>
#include <vector>
#include <iostream>
#include <chrono>


class Pessoa
{
private:
    std::string nome;
    int nascimento;
public:
    Pessoa(std::string nome, int nascimento);

    std::string getNome() { return nome; }
    int getNascimento() { return nascimento; }
    void setNascimento(int novaIdade);
};

class Aluno : public Pessoa
{
private:
    std::vector<std::string> cursosOficiais = {"ADS", "CC", "ADM", "ENG", "MED"};
    std::string curso;
public:
    Aluno(std::string nome, int nascimento, std::string curso);
    std::string getCurso() { return curso; }
    void addCurso(std::string novoCurso);
    void setCurso(std::string curso);
    std::string getCursos()
    {
        for (const auto& c : cursosOficiais) {
            std::cout << c << " ";
        }
        std::cout << std::endl;
        return "";
    }
};


#endif //EXERCICIOSPOO_PESSOA_H
