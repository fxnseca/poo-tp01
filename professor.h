#ifndef PROFESSOR_H
#define PROFESSOR_H
#include <string>

using namespace std;

class Professor{
    string curso;

public:
    Professor(string);
    ~Professor();

    string getProfCurso() const;
    void setProfCurso(string curso);
};

#endif