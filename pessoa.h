#ifndef PESSOA_H
#define PESSOA_H
#include <string>

using namespace std;
class Pessoa {
    string nome;
    int cpf;
    int telefone;
public:
    Pessoa(string = "", int = 0, int = 0);
    ~Pessoa();

    string getPessoaNome() const;
    void setPessoaNome(string);
    int getPessoaCPF() const;
    void setPessoaCPF(int);
    int getPessoaTelefone() const;
    void setPessoaTelefone(int);
};
 
#endif