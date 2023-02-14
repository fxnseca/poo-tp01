#ifndef FUNCOES_H
#define FUNCOES_H

#include "curso.h"
#include "sala.h"
#include "aluno.h"
#include "professor.h"
#include "gestor.h"

#include <vector>

using namespace std;

void leituraEMenu(char*);
void leArquivo(int*, int*, int*, char*, vector<Sala>*, vector<Curso>*, vector<Aluno>*);
void criaAdministrador(int*, vector<Gestor>*);
void criaAluno(int*, vector<Aluno>*, int*, vector<Curso>*);
#endif