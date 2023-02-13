#ifndef SALA_H
#define SALA_H

using namespace std;

class Sala{
    int sala;
    int capacidade;
    string cursoDia[5];

public:
    Sala(int = 0, int = 0, string="");
    ~Sala();
    int getSala() const;
    void setSala(int);
    int getCapacidade() const;
    void setCapacidade(int);
    string getCursoDia(int) const;
    void setCursoDia(string, int);
};

#endif
