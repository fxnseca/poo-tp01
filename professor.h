#ifndef PROFESSOR_H
#define PROFESSOR_H
#include <string>

using namespace std;

class Professor{
    string curso;

public:
    Professor(string);
    ~Professor();

    string getProfNome() const;
    void setProfNome(string nome);
    int getProfTelefone() const;
    void setProfTelefone(int telefone);
    int getProfCpf() const;
    void setProfCpf(int cpf);
    string getProfCurso() const;
    void setProfCurso(string nome);
};

#endif