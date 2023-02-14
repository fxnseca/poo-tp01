#ifndef GESTOR_H
#define GESTOR_H
#include <string>
#include "pessoa.h"

using namespace std;

class Gestor: public Pessoa{
    string login;
    string senha;
public:
    Gestor(string = "", string = "", string = "", string = "", string = "");
    ~Gestor();
    string getGestorLogin() const;
    void setGestorLogin(string);
    string getGestorSenha() const;
    void setGestorSenha(string);
};

#endif