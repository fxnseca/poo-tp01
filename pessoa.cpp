#include <iostream>
#include "pessoa.h"

using namespace std;

//construtor
Pessoa::Pessoa(string nome, string telefone, string cpf) : nome(nome), telefone(telefone), cpf(cpf){}
Pessoa:: ~Pessoa(){}

string Pessoa::getNome() const { return nome; }
void Pessoa:: setNome(string nome){
    this->nome = nome;
}

string Pessoa::getCpf() const { return cpf; }
void Pessoa::setCpf(string cpf){
    this->cpf = cpf;
}

string Pessoa::getTelefone() const { return telefone; }
void Pessoa::setTelefone(string telefone){
    this->telefone = telefone;
}
