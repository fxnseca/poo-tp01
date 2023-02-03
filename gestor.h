#ifndef GESTOR_H
#define GESTOR_H
#include <string>

using namespace std;

class Gestor{
    string nome;
    int telefone;
    int cpf;
    string login;
    int senha;

public:
    Gestor(string, int, int, string, int);
    ~Gestor();

    string getGestorNome() const;
    void setGestorNome(string nome);
    int getGestorTelefone() const;
    void setGestorTelefone(int telefone);
    int getGestorCpf() const;
    void setGestorCpf(int cpf);
    string getGestorLogin() const;
    void setGestorLogin(string login);
    int getGestorSenha() const;
    void setGestorSenha(int senha);
};

#endif