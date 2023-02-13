#ifndef PESSOA_H
#define PESSOA_H

using namespace std;

class Pessoa {
    string nome;
    int cpf;
    int telefone;

public:
    Pessoa(string, int, int){}
    ~Pessoa();
    string getNome() const;
    void setNome(string);
    int getTelefone() const;
    void setTelefone(int) ;
    int getCpf()const;
    void setCpf(int) ;
};
#endif
