//
// Created by fabio on 01/10/2026.
//


#include "Pessoa.h"

int main()
{

    Aluno aluno1("João", 2000, "ADM");
    std::cout << "Nome: " << aluno1.getNome() << std::endl;
    std::cout << "Curso: " << aluno1.getCurso() << std::endl;
    std::cout << "Idade: " << aluno1.getNascimento() << std::endl;
    aluno1.setNascimento(1312);
    std::cout << "Idade atualizada: " << aluno1.getNascimento() << std::endl;
    aluno1.setCurso("ENG");
    std::cout << "Curso atualizado: " << aluno1.getCurso() << std::endl;

    aluno1.addCurso("PPP");
    std::cout << "Cursos oficiais: " << aluno1.getCursos() << std::endl;



    return 0;
}