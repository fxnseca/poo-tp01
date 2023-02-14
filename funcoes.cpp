#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "funcoes.h"
#include "curso.h"
#include "sala.h"
#include "aluno.h"
#include "professor.h"
#include "gestor.h"

using namespace std;

void menu_principal(){
    int num = 0, num1 = 0;
    int *numeroSalas = &num;
    int *numeroCursos = &num1;
    leArquivo(numeroSalas, numeroCursos);
    // cout << "Salas = " << *numeroSalas;
    // cout << " Cursos = " << *numeroCursos;
};

void leArquivo(int *numeroSalas, int *numeroCursos){
    vector<Sala> salas; //Vetor de salas
    vector<Curso> cursos;
    ifstream arquivo("dados.txt");//Abrindo arquivo para leitura
    
    if(arquivo.is_open()){

        string linha;
        while(getline(arquivo,linha)){
            int pos = linha.find(";");
            string choice = linha.substr(0,pos);
            if(choice == "3"){ //Lendo dados do curso
                linha = linha.substr(pos+1);
                pos = linha.find(";");
                choice = linha.substr(0,pos);

                if(choice == "1"){
                    linha = linha.substr(pos+1);
                    pos = linha.find(";");
                    string materia = linha.substr(0,pos);

                    linha = linha.substr(pos+1);
                    pos = linha.find(";");
                    string id = linha.substr(0,pos);

                    linha = linha.substr(pos+1);
                    pos = linha.find(";");
                    string dias[2];

                    dias[0] = linha.substr(0,pos); 
                    linha = linha.substr(pos+1);
                    pos = linha.find(";");
                    dias[1] = linha.substr(0,pos); 

                    Curso cursoAux(materia, id, *dias);
                    cout << dias[1] << endl;
                    cursos.push_back(cursoAux);
                    (*numeroCursos) += 1;
                }

            }
            if(choice == "4"){//Lendo dados das salas
                linha = linha.substr(pos+1);
                pos = linha.find(";");
                int sala = (stoi(linha.substr(0,pos)));
                linha = linha.substr(pos+1);
                pos = linha.find(";");
                int capacidade = (stoi(linha.substr(0,pos)));
                Sala salaAux(sala, capacidade, "");
                salas.push_back(salaAux);
                (*numeroSalas) += 1;
            }
        }
        arquivo.close();
    }else {
        cout << "Erro ao abrir arquivo" << endl;
    };
    // for (int i = 0; i < *numeroCursos; i++){
    //     cout << cursos[i].getDias() << endl;
    // };
    
}