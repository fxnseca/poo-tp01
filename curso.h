#ifndef CURSO_H
#define CURSO_H
#include <iostream>
#include <vector>

using namespace std;

class Curso{
    string materia;
    string id;
    vector<string> dia;
    // int sala;

public:
    Curso(string, string, vector<string>);
    virtual ~Curso();

    string getMateria() const;
    void setMateria(string);
    string getId() const;
    void setId(string);
    vector<string> getDia() const;
    void setDia(vector<string>);
    // int getSala() const;
    // void setSala(int);
};

#endif