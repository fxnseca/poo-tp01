#include <iostream>
#include "aluno.h"
#include "funcoes.h"

using namespace std;

Aluno::Aluno(string nome, string cpf, string telefone, string matricula, string curso): Pessoa(nome, cpf, telefone), matricula(matricula), curso(curso){}
Aluno::~Aluno(){}

string Aluno::getAlunoMatricula() const { return matricula; }
void Aluno::setAlunoMatricula(string matricula){
    this->matricula = matricula;
}

string Aluno::getAlunoCurso() const { return curso; }
void Aluno::setAlunoCurso(string curso){
    this->curso = curso;
}
