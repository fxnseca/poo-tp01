#include <iostream>
#include "prof.h"

using namespace std;

Professor::Professor(string nome, int telefone, int cpf, string curso){}
Professor ::~Professor(){}

string Professor::getProfNome() const { return nome; }
void Professor::setProfNome(string nome){
    this->nome = nome;
}

int Professor::getProfTelefone() const { return telefone; }
void Professor::setProfTelefone(int telefone){
    this->telefone = telefone;
}

int Professor::getProfCpf() const { return cpf; }
void Professor::setProfCpf(int cpf){
    this->cpf = cpf;
}

string Professor::getProfCurso() const { return curso; }
void Professor::setProfCurso(string curso){
    this->curso = curso;
}