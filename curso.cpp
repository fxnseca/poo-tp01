#include <iostream>
#include <vector>
#include "curso.h"

using namespace std;
Curso::Curso(string materia, string id, string dias): materia(materia){}
Curso::~Curso() {}

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

string Curso::getDias(int i) const{ 
    return dias[i];
}
void Curso::setDias(string dia, int i){
    this->dias[i] = dia;
}
int Curso::getSala(int i) const{ 
    return sala[i];
}
void Curso::setSala(int sala, int i){
    this->sala[i] = sala;
}
