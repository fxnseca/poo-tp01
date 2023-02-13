#include <iostream>
#include "pessoa.h"

using namespace std;

//construtor
Pessoa::Pessoa(string nome, int telefone, int cpf): nome(nome), telefone(telefone), cpf(cpf) {}
Pessoa:: ~Pessoa(){}

string Pessoa::getNome() const { return nome; }
void Pessoa:: setNome(string nome){
    this->nome = nome;
}

int Pessoa::getCpf() const { return cpf; }
void Pessoa::setCpf(int cpf){
    this->cpf = cpf;
}

int Pessoa::getTelefone() const { return telefone; }
void Pessoa::setTelefone(int telefone){
    this->telefone = telefone;
}