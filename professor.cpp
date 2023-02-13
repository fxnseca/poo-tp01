#include <iostream>
#include "professor.h"

using namespace std;

Professor::Professor(string curso){}
Professor ::~Professor(){}

string Professor::getProfessorCurso() const { return curso; }
void Professor::setProfessorCurso(string curso){
    this->curso = curso;
}