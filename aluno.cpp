#include <iostream>
#include "aluno.h"

using namespace std;

Aluno::Aluno(string nome, int telefone, int cpf, int matricula, string curso){}
Aluno::~Aluno(){}

string Aluno::getAlunoNome() const { return nome; }
void Aluno::setAlunoNome(string nome){
    this->nome = nome;
}

int Aluno::getAlunoTelefone() const { return telefone; }
void Aluno::setAlunoTelefone(int telefone){
    this->telefone = telefone;
}

int Aluno::getAlunoCpf() const { return cpf; }
void Aluno::setAlunoCpf(int cpf){
    this->cpf = cpf;
}

int Aluno::getAlunoMatricula() const { return matricula; }
void Aluno::setAlunoMatricula(int matricula){
    this->matricula = matricula;
}

string Aluno::getAlunoCurso() const { return curso; }
void Aluno::setAlunoCurso(string curso){
    this->curso = curso;
}