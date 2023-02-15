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

void leituraEMenu(char *argv){
    vector<Sala> s; //Inicializador do vetor de salas
    vector<Sala> *salas = &s; //Vetor de salas
    vector<Curso> c;//Inicializador do vetor de cursos
    vector<Curso> *cursos = &c;//Vetor de cursos
    vector<Aluno> a;//Inicializador do vetor de alunos
    vector<Aluno> *alunos = &a;//Vetor de alunos
    vector<Professor> p;//Inicializador do vetor de professores
    vector<Professor> *professor = &p;//Vetor de professor
    vector<Gestor> g;//Inicializador do vetor de gestor
    vector<Gestor> *gestor = &g;//Vetor de gestor

    criaAdministrador(gestor);
    if(argv != ""){
        leArquivo(argv, salas, cursos, alunos);
    }

    char continuar = 's';
    while(continuar == 's' || continuar =='S'){
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
                        criaAluno(alunos,cursos);
                    break;
                    case 2:
                        consultaAluno(alunos);
                    break;
                    case 3:
                        excluiAluno(alunos);
                    break;
                    case 4:
                        atualizaAluno(alunos);
                    break;
                    case 5:
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
                    break;
                default:
                    cout << "ESCOLHA INVALIDA.\n";
                    break;
                }
                break;
            break;
        };
        cout << "Deseja retornar ao menu principal? (S ou N): ";
        cin >> continuar;
    };
};

void leArquivo(char *argv, vector<Sala> *salas, vector<Curso> *cursos, vector<Aluno> *alunos){
    ifstream arquivo(argv);//Abrindo arquivo para leitura
    if(arquivo.is_open()){
        string linha;
        while(getline(arquivo,linha)){
            int pos = linha.find(";");
            string choice = linha.substr(0,pos);
            if(choice == "1"){ //Lendo dados do Aluno
                linha = linha.substr(pos+1);
                pos = linha.find(";");
                choice = linha.substr(0,pos);
                if(choice == "1"){

                    linha = linha.substr(pos+1);
                    pos = linha.find(";");
                    string nome = linha.substr(0,pos);

                    linha = linha.substr(pos+1);
                    pos = linha.find(";");
                    string telefone = linha.substr(0,pos);

                    linha = linha.substr(pos+1);
                    pos = linha.find(";");
                    string cpf = linha.substr(0,pos);

                    linha = linha.substr(pos+1);
                    pos = linha.find(";");
                    string curso = linha.substr(0,pos);
                    if(curso == "Curso de Desenvolvimento Web Completo"){
                        (*cursos)[0].setQuantidadeAlunos(1);
                    }else if(curso == "Introdução à Inteligência Artificial com Python"){
                        (*cursos)[1].setQuantidadeAlunos(1);
                    }else if(curso == "Gestão de Projetos: Aprendendo a Planejar e Executar Projetos Eficientemente"){
                        (*cursos)[2].setQuantidadeAlunos(1);
                    }else if(curso == "Marketing Digital: Aprenda a Alavancar seus Negócios Online"){
                        (*cursos)[3].setQuantidadeAlunos(1);
                    }else if(curso == "Criação de Jogos com Unity"){
                        (*cursos)[4].setQuantidadeAlunos(1);
                    }else if(curso == "Produção Musical: Aprenda a Criar e Mixar Música Eletrônica"){
                        (*cursos)[5].setQuantidadeAlunos(1);
                    }else if(curso == "Data Science com R: Análise de Dados do Zero ao Avançado"){
                        (*cursos)[6].setQuantidadeAlunos(1);
                    }else{
                        (*cursos)[7].setQuantidadeAlunos(1);
                    }
                    string matricula = "22.2.40" + (to_string ((*alunos).size()+1));
                    Aluno alunoAux(nome, cpf, telefone, matricula, curso);
                    (*alunos).push_back(alunoAux);
                }
            }   
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
                    int quantidadeAlunos = 0;

                    Curso cursoAux(materia, id,quantidadeAlunos, *dias);
                    (*cursos).push_back(cursoAux);
                }
            }
            else if(choice == "4"){//Lendo dados das salas
                linha = linha.substr(pos+1);
                pos = linha.find(";");
                int sala = (stoi(linha.substr(0,pos)));
                linha = linha.substr(pos+1);
                pos = linha.find(";");
                int capacidade = (stoi(linha.substr(0,pos)));
                Sala salaAux(sala, capacidade, "");
                (*salas).push_back(salaAux);
            }
        }
        arquivo.close();
        cout << "Arquivo inserido com sucesso!";
    }else {
        cout << "Erro ao abrir arquivo ou arquivo inexistente na entrada" << endl;
    };
};

void criaAdministrador(vector<Gestor> *gestor){
    string login = "ADMIN", senha = "123456";
    Gestor g("","","",login, senha);
    (*gestor).push_back(g);
};

void criaAluno(vector<Aluno> *alunos, vector<Curso> *cursos){
    cout << "\n==============================";
    cout << "\n       CADASTRO DE ALUNO";    
    cout << "\n==============================\n";
    string nome, cpf, telefone, matricula, curso;
    int j;
    cout << "Informe o nome: ";
    cin.ignore();
    getline(cin,nome, '\n');
    cout << "Informe o cpf: ";
    getline(cin,cpf, '\n');
    cout << "Informe o telefone: ";
    getline(cin,telefone, '\n');
    cout << "Informe a matricula: ";
    getline(cin,matricula, '\n');
    cout << "\nInforme o numero referente ao curso:" << endl;
    for (int i = 0; i < (cursos->size()); i++)
    {
        cout << i+1 << "-> " << (*cursos)[i].getMateria() << endl;
    }
    cin >> j;
    curso = (*cursos)[j-1].getMateria();
    Aluno alunoAux(nome, cpf, telefone, matricula, curso);
    (*alunos).push_back(alunoAux);
    cout << "\nAluno Cadastrado com sucesso. Total de alunos: "<<(*alunos).size()<< endl;
};

void consultaAluno(vector<Aluno> *alunos){
    string matriculaProcurada;
    cout << "\n==============================";
    cout << "\n       CONSULTA DE ALUNO";    
    cout << "\n==============================\n";
    cout << "Informe a matricula a ser procurada:";
    cin >> matriculaProcurada;
    for (int i = 0; i < (*alunos).size(); i++){
        // cout << "nome aluno " << i << ":" <<(*alunos)[i].getAlunoMatricula() <<endl;
        if (matriculaProcurada == (*alunos)[i].getAlunoMatricula()){
            cout << "Aluno encontrado: " << (*alunos)[i].getNome() << endl << "Telefone para contato: " << (*alunos)[i].getTelefone(); 
            return;
        }
    } 
    cout << "Aluno nao encontrado! ";
}
void excluiAluno(vector<Aluno> *alunos){
    string matriculaProcurada;
    cout << "\n==============================";
    cout << "\n       EXCLUSAO DE ALUNO";    
    cout << "\n==============================\n";
    cout << "Informe a matricula do aluno a ser excluído do sistema:";
    cin >> matriculaProcurada;
    for (int i = 0; i < (*alunos).size(); i++){
    // cout << "nome aluno " << i << ":" <<(*alunos)[i].getAlunoMatricula() <<endl;
        if (matriculaProcurada == (*alunos)[i].getAlunoMatricula()){
            (*alunos).erase((*alunos).begin() + i);
            cout<< "Aluno exluido do sistema com sucesso!";
            return;
        };
    }
    cout << "Aluno não encontrado! ";
}

void atualizaAluno(vector<Aluno> *alunos){
    string matriculaProcurada;
    string aux;
    cout << "\n==============================";
    cout << "\n       ATUALIZACAO DE ALUNO";    
    cout << "\n==============================\n";
    cout << "Informe a matricula do aluno a ser atualizado:";
    cin >> matriculaProcurada;
    for (int i = 0; i < (*alunos).size(); i++){
    // cout << "nome aluno " << i << ":" <<(*alunos)[i].getAlunoMatricula() <<endl;
        if (matriculaProcurada == (*alunos)[i].getAlunoMatricula()){
            cout << "Aluno encontrado! Abaixo atualize os campos!" << endl;
            cout << "Nome:";
            getline(cin, aux, '\n');
            (*alunos)[i].setNome(aux);
            cout << "CPF:";
            getline(cin, aux, '\n');
            (*alunos)[i].setCpf(aux);
            cout << "Telefone:";
            getline(cin, aux, '\n');
            (*alunos)[i].setTelefone(aux);
            cout << "Matricula:";
            getline(cin, aux, '\n');
            (*alunos)[i].setAlunoMatricula(aux);
            cout << "Curso:";
            getline(cin, aux, '\n');
            (*alunos)[i].setAlunoCurso(aux);
        }
    }
    cout << "Aluno nao encontrado! ";
}