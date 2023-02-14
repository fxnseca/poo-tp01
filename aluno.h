#ifndef ALUNO_H
#define ALUNO_H

#include "pessoa.h"

using namespace std;

class Aluno : public Pessoa{
    string matricula;
    string curso;

public:
    Aluno(string, string, string, string, string);
    ~Aluno();

    string getAlunoMatricula() const;
    void setAlunoMatricula(string matricula);
    string getAlunoCurso() const;
    void setAlunoCurso(string curso);
};

#endif