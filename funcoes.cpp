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
    while (choice != 1 && choice !=2 && choice !=3 &&choice != 4 && choice !=5)
    {
        cout << "OPCAO INVALIDA. INFORME SUA ESCOLHA: ";
        cin >> choice;
        cout << "==============================\n";
    }
    
    switch (choice) {
        case 1: //GERENCIAR ALUNO
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
            cin >> choice;

            while (choice != 1 && choice !=2 && choice !=3 &&choice != 4 && choice !=5)
            {
                cout << "OPCAO INVALIDA. INFORME SUA ESCOLHA: ";
                cin >> choice;
                cout << "==============================\n";
            }
            switch (choice){
                case 1:
                    crud_aluno();
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
                    menu_principal();
                break;
            default:
                cout << "Escolha inválida.\n";
                break;
            }
            break;
        break;

        case 2: //GERENCIAR PROFESSOR
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
            cin >> choice;
            while (choice < 1 && choice > 5)
            {
                cout << "OPCAO INVALIDA. INFORME SUA ESCOLHA: ";
                cin >> choice;
                cout << "==============================\n";
            }
            if(choice == 5){
                menu_principal()
            }else{
                crudProf(choice)
            }
            // switch (choice){
            //     case 1:
            //     /* cadastrar professor*/
            //     break;
            //     case 2:
            //     /* consultar professor*/
            //     break;
            //     case 3:
            //     /* excluir professor*/
            //     break;
            //     case 4:
            //     /* atualizar professor*/
            //     break;
            //     case 5:
            //         menu_principal();
            //     break;
            // default:
            //     cout << "Escolha inválida.\n";
            //     break;
            // }
            // break;
        break;

        case 3: //GERENCIAR CURSO
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
            cin >> choice;
            while (choice != 1 && choice !=2 && choice !=3 &&choice != 4 && choice !=5)
            {
                cout << "OPCAO INVALIDA. INFORME SUA ESCOLHA: ";
                cin >> choice;
                cout << "==============================\n";
            }
            switch (choice){
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
                    menu_principal();
                break;
            default:
                cout << "ESCOLHA INVALIDA.\n";
                break;
            }
            break;
        break;

        case 4: //GERENCIAR SALA
            cout << "\n==============================";
            cout << "\n       CADASTRO DE SALA";
            cout << "\n==============================\n";
           
        break;

        case 5: //GERENCIAR RELATORIO
            cout << "\n==============================";
            cout << "\n       SUBMENU (RELATORIO)";
            cout << "\n==============================\n";
            cout << "1. Aluno\n";
            cout << "2. Professor\n";
            cout << "3. Curso\n";
            cout << "4. Salas\n";
            cout << "5. Voltar ao MENU INICIAL\n";
            cout << "==============================\n";
            cout << "INFORME SUA ESCOLHA: ";
            cin >> choice;
            while (choice != 1 && choice !=2 && choice !=3 &&choice != 4 && choice !=5)
            {
                cout << "OPCAO INVALIDA. INFORME SUA ESCOLHA: ";
                cin >> choice;
                cout << "==============================\n";
            }
            switch (choice){
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
                    menu_principal();
                break;
            default:
                cout << "ESCOLHA INVALIDA.\n";
                break;
            }
            break;
        break;
    }
}

void cadastro_sala(){
    
}


void crud_aluno(int option){
    switch (option){
    case 1:
        cout << "\n\n==============================";
        cout << "\n       CRIANDO ALUNO";
        cout << "\n==============================\n";
        cout << "Informe o nome: ";
        cin >> auxString;
        aluno.setNome("Joao");
        // cout << "\nInforme o CPF: ";
        // cin >> cpf;               
        // cout << "\nInforme o telefone: ";
        // cin >> telefone;
        // cout << "\nInforme a matricula: ";
        // cin >> matricula; 
        // cout << "\nInforme o curso: ";
        // cin >> curso; 
        cout << aluno.getNome();
    break;
    
    default:
        break;
    }
}

void crud_prof(){
    read()
}
void crud_curso(){}

void create(){
    
}


void read(){
}

void exclui(){

}
void att(){
    
}