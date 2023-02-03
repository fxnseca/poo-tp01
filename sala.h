#ifndef SALA_H
#define SALA_H

using namespace std;

class Sala{
    int sala;
    int capacidade;

public:
    Sala(int,int);
    int getSala() const;
    void setSala(int sala);
    int getCapacidade() const;
    void setCapacidade(int capacidade);
};

#endif
