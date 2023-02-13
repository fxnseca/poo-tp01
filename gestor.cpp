#include <iostream>
#include "gestor.h"
#include "pessoa.h"
using namespace std;

Gestor::Gestor(string login, string senha): login(login), senha(senha){}
Gestor ::~Gestor(){}

string Gestor::getGestorLogin() const{ return login; }
void Gestor::setGestorLogin(string login){
    this->login = login; 
}

string Gestor::getGestorSenha() const{ return senha; }
void Gestor::setGestorSenha(string senha){
    this->senha = senha;
}