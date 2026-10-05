//
// Created by fabio on 05/10/2026.
//

#ifndef EXERCICIOSPOO_ALUNO_H
#define EXERCICIOSPOO_ALUNO_H
#include <string>
#include <iostream>
#include <nlohmann/json.hpp>


// Exercicio incompleto falta implementar a classe XML e o metodo exportar da classe XML

class Aluno
{
private:
    std::string nome;
    std::string curso;
    std::string serie;
public:
    Aluno(std::string nome, std::string curso, std::string serie);
    std::string getNome() const { return nome; }
    std::string getCurso() const { return curso; }
    std::string getSerie() const { return serie; }

};

inline void to_json(nlohmann::json& j, const Aluno& aluno)
{
    j = nlohmann::json{
        {"nome", aluno.getNome()},
        {"curso", aluno.getCurso()},
        {"serie", aluno.getSerie()}
    };
}

class Usuario
{
private:
    std::string nome;
    std::string email;
public:
    Usuario(std::string nome, std::string email);
    std::string getNome() const { return nome; }
    std::string getEmail() const { return email; }

};

inline void to_json(nlohmann::json& j, const Usuario& usuario)
{
    j = nlohmann::json{
        {"nome", usuario.getNome()},
        {"email", usuario.getEmail()}
    };
}

class JSON
{
public:
    template <typename T>
    std::string exportar(const T& dados)
    {
        nlohmann::json j = dados;
        return j.dump(4); // Indentação de 4 espaços
    }
};

class XML
{
public:
    void exportar();
};



#endif //EXERCICIOSPOO_ALUNO_H
