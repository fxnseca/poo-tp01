#ifndef PROFESSOR_H
#define PROFESSOR_H
#include <string>

using namespace std;

class Professor{
    string nome;
    int telefone;
    int cpf;
    string curso;

public:
    Professor(string, int, int, string);
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