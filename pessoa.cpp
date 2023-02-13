#include <iostream>
#include "pessoa.h"

using namespace std;

Pessoa::Pessoa(string nome, int cpf, int telefone){};
Pessoa::~Pessoa(){};

string Pessoa::getPessoaNome() const {return nome;};
void Pessoa::setPessoaNome(string nome){
    this->nome = nome;
};

int Pessoa::getPessoaCPF() const {return cpf;};
void Pessoa::setPessoaCPF(int cpf){
    this->cpf = cpf;
};

int Pessoa::getPessoaTelefone() const {return telefone;};
void Pessoa::setPessoaTelefone(int telefone){
    this->telefone = telefone;
};