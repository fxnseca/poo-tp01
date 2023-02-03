#ifndef CURSO_H
#define CURSO_H

class Curso{
    string materia;
    string id;
    vector <string> dia;
    int sala;

public:
    Curso(string, string, vector <string>, int);
    virtual ~Curso();

};

#endif
