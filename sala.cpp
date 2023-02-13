#include <iostream>
#include <vector>
#include "sala.h"

using namespace std;

//construtor
Sala::Sala(int sala, int capacidade, string cursoDia){}
Sala::~Sala(){}

int Sala::getSala() const{
    return sala;
}
void Sala::setSala(int sala){
    this->sala = sala;
}

int Sala::getCapacidade() const{
    return capacidade;
}
void Sala::setCapacidade(int capacidade){
    this->capacidade = capacidade;
}

string Sala::getCursoDia(int i) const{
    return cursoDia[i];
} 
void Sala::setCursoDia(string curso, int i){
    this->cursoDia[i] = curso;
}