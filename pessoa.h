#ifndef PESSOA_H
#define PESSOA_H
#include <string>

using namespace std;
class Pessoa {
    string nome;
    string cpf;
    string telefone;
public:
    Pessoa(string = "", string = 0, string = 0);
    ~Pessoa();

    string getNome() const;
    void setNome(string);
    string getTelefone() const;
    void setTelefone(string) ;
    string getCpf()const;
    void setCpf(string) ;
};
#endif
