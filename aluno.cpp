#include <iostream>
#include "aluno.h"

using namespace std;

Aluno::Aluno(int matricula, string curso){}
Aluno::~Aluno(){}

int Aluno::getAlunoMatricula() const { return matricula; }
void Aluno::setAlunoMatricula(int matricula){
    this->matricula = matricula;
}

string Aluno::getAlunoCurso() const { return curso; }
void Aluno::setAlunoCurso(string curso){
    this->curso = curso;
}