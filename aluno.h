#ifndef ALUNO_H
#define ALUNO_H

#include "pessoa.h"

using namespace std;

class Aluno{
    string nome;
    int telefone;
    int cpf;
    int matricula;
    string curso;

public:
    Aluno(string, int, int, int, string);
    ~Aluno();

    string getAlunoNome() const;
    void setAlunoNome(string nome);
    int getAlunoTelefone() const;
    void setAlunoTelefone(int telefone);
    int getAlunoCpf() const;
    void setAlunoCpf(int cpf);
    int getAlunoMatricula() const;
    void setAlunoMatricula(int matricula);
    string getAlunoCurso() const;
    void setAlunoCurso(string curso);
};

#endif