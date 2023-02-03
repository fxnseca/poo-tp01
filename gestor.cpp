#include <iostream>
#include "gestor.h"

using namespace std;

Gestor::Gestor(string nome, int telefone, int cpf, string login, int senha){}
Gestor ::~Gestor(){}

string Gestor::getGestorNome() const { return nome; }
void Gestor::setGestorNome(string nome){
    this->nome = nome;
}

int Gestor::getGestorTelefone() const { return telefone; }
void Gestor::setGestorTelefone(int telefone){
    this->telefone = telefone;
}

int Gestor::getGestorCpf() const { return cpf; }
void Gestor::setGestorCpf(int cpf){
    this->cpf = cpf;
}

string Gestor::getGestorLogin() const{ return login; }
void Gestor::setGestorLogin(string login){
    this->login = login; 
}

int Gestor::getGestorSenha() const{ return senha; }
void Gestor::setGestorSenha(int senha){
    this->senha = senha;
}