//
// Created by fabio on 01/10/2026.
//

#include "Pessoa.h"


Pessoa::Pessoa(std::string nome, int nascimento)
    : nome(nome), nascimento(nascimento){
}

Aluno::Aluno(std::string nome, int nascimento, std::string curso)
    : Pessoa(nome, nascimento)
{
    if (std::find(cursosOficiais.begin(), cursosOficiais.end(), curso) != cursosOficiais.end()) {
        this->curso = curso;
    } else {
        throw std::invalid_argument("Curso não é oficial.");
    }
}

void Aluno::setCurso(std::string curso)
{
    if (std::find(cursosOficiais.begin(), cursosOficiais.end(), curso) != cursosOficiais.end()) {
        this->curso = curso;
    } else {
        throw std::invalid_argument("Curso não é oficial.");
    }
}

void Pessoa::setNascimento(int novaIdade)
{
    auto local_time = std::chrono::zoned_time{std::chrono::current_zone(), std::chrono::system_clock::now()}.get_local_time();
    int ano = static_cast<int>(std::chrono::year_month_day{std::chrono::floor<std::chrono::days>(local_time)}.year());

    if (novaIdade <= 1900 || novaIdade >= 2026) {
        std::cout << "Ano de nascimento inválido." << std::endl;
    } else if (ano - novaIdade < 18) {
        std::cout << "Você não tem idade suficiente para se matricular." << std::endl;
    }else {
        nascimento = novaIdade;
    }
}

void Aluno::addCurso(std::string novoCurso)
{
    for (const auto& curso : cursosOficiais) {
        if (novoCurso == curso) {
            std::cout << "Curso já está na lista de cursos oficiais." << std::endl;
        } else{
            cursosOficiais.push_back(novoCurso);
            std::cout << "Curso adicionado com sucesso." << std::endl;
            break;
        }
    }
}