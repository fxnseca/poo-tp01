#include <iostream>
#include <vector>
#include "curso.h"

using namespace std;

Curso::Curso(string materia, string id, vector<string> dia){}
Curso ::~Curso() {}

string Curso::getMateria() const{ 
    return materia;
}
void Curso::setMateria(string materia){
    this->materia = materia;
}

string Curso::getId() const{ 
    return id;
}
void Curso::setId(string id){
    this->id = id;
}

vector<string> Curso::getDia() const{ 
    return dia;
}
void Curso::setDia(vector<string> dia){
    this->dia = dia;
}
