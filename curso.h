#ifndef CURSO_H
#define CURSO_H
#include <iostream>
#include <vector>

using namespace std;

class Curso{
    string materia;
    string id;
    string dias[2];
    int sala[2];

public:
    Curso(string, string, string);
    virtual ~Curso();

    string getMateria() const;
    void setMateria(string);
    string getId() const;
    void setId(string);
    string getDias(int) const;
    void setDias(string, int);
    int getSala(int) const;
    void setSala(int, int);
};

#endif