#ifndef PROFESSOR_H
#define PROFESSOR_H
#include <string>
#include "pessoa.h"

using namespace std;

class Professor: public Pessoa{
    string curso;

public:
    Professor(string = "");
    ~Professor();

    string getProfCurso() const;
    void setProfCurso(string curso);
};

#endif