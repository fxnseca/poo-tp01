#include <iostream>
#include "pessoa.h"
#include "professor.h"

using namespace std;

Professor::Professor(string curso){}
Professor ::~Professor(){}

string Professor::getProfCurso() const { return curso; }
void Professor::setProfCurso(string curso){
    this->curso = curso;
}