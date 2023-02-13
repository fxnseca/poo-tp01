#ifndef ALUNO_H
#define ALUNO_H

#include "pessoa.h"

using namespace std;

class Aluno : public Pessoa{
    int matricula;
    string curso;

public:
    Aluno(int, string);
    ~Aluno();

    int getAlunoMatricula() const;
    void setAlunoMatricula(int matricula);
    string getAlunoCurso() const;
    void setAlunoCurso(string curso);
};

#endif