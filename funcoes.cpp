#include <iostream>
#include <string>
#include <vector>

#include "funcoes.h"
#include "curso.h"
#include "sala.h"
#include "aluno.h"
#include "professor.h"
#include "gestor.h"

void menu_principal(){
    int choice;

    cout << "\n==============================";
    cout << "\n             MENU";
    cout << "\n==============================\n";
    cout << "1. Gerenciar Aluno\n";
    cout << "2. Gerenciar Professor\n";
    cout << "3. Gerenciar Curso\n";
    cout << "4. Cadastrar Sala\n";
    cout << "5. Gerar Relatorio\n";
    cout << "==============================\n";
    cout << "INFORME SUA ESCOLHA: ";
    cin >> choice;
    
    switch (choice) {
        case 1: //GERENCIAR ALUNO
            int op_aluno;

            cout << "\n==============================";
            cout << "\n       SUBMENU (ALUNO)";
            cout << "\n==============================\n";
            cout << "1. Cadastrar\n";
            cout << "2. Consultar\n";
            cout << "3. Excluir\n";
            cout << "4. Atualizar\n";
            cout << "5. Voltar ao MENU INICIAL\n";
            cout << "==============================\n";
            cout << "INFORME SUA ESCOLHA: ";
            cin >> op_aluno;
            
            switch (op_aluno){
                case 1:
                /* cadastrar aluno*/
                break;
                case 2:
                /* consultar aluno*/
                break;
                case 3:
                /* excluir aluno*/
                break;
                case 4:
                /* atualizar aluno*/
                break;
                case 5:
                /* volta ao menu inicial*/
                break;
            default:
                cout << "Escolha inválida.\n";
                break;
            }
            break;
        break;

        case 2: //GERENCIAR PROFESSOR
            int op_prof;

            cout << "\n==============================";
            cout << "\n     SUBMENU (PROFESSOR)";
            cout << "\n==============================\n";
            cout << "1. Cadastrar\n";
            cout << "2. Consultar\n";
            cout << "3. Excluir\n";
            cout << "4. Atualizar\n";
            cout << "5. Voltar ao MENU INICIAL\n";
            cout << "==============================\n";
            cout << "INFORME SUA ESCOLHA: ";
            cin >> op_prof;
            
            switch (op_prof){
                case 1:
                /* cadastrar professor*/
                break;
                case 2:
                /* consultar professor*/
                break;
                case 3:
                /* excluir professor*/
                break;
                case 4:
                /* atualizar professor*/
                break;
                case 5:
                /* volta ao menu inicial*/
                break;
            default:
                cout << "Escolha inválida.\n";
                break;
            }
            break;
        break;

        case 3: //GERENCIAR CURSO
            int op_curso;

            cout << "\n==============================";
            cout << "\n       SUBMENU (CURSO)";
            cout << "\n==============================\n";
            cout << "1. Cadastrar\n";
            cout << "2. Consultar\n";
            cout << "3. Excluir\n";
            cout << "4. Atualizar\n";
            cout << "5. Voltar ao MENU INICIAL\n";
            cout << "==============================\n";
            cout << "INFORME SUA ESCOLHA: ";
            cin >> op_curso;
            
            switch (op_curso){
                case 1:
                /* cadastrar curso*/
                break;
                case 2:
                /* consultar curso*/
                break;
                case 3:
                /* excluir curso*/
                break;
                case 4:
                /* atualizar curso*/
                break;
                case 5:
                /* volta ao menu inicial*/
                break;
            default:
                cout << "ESCOLHA INVALIDA.\n";
                break;
            }
            break;
        break;

        default:
            cout << "COMANDO INVALIDO.\n";
    }
}

void cadastro_sala(){
    
}

void crud_aluno(){}
void crud_prof(){}
void crud_curso(){}