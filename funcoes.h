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
void leArquivo(char*, vector<Sala>*, vector<Curso>*, vector<Aluno>*);
void criaAdministrador(vector<Gestor>*);
void criaAluno(vector<Aluno>*,vector<Curso>*);
void consultaAluno(vector<Aluno>*);
void excluiAluno(vector<Aluno>*);
void atualizaAluno(vector<Aluno>*);
#endif