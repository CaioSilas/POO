#include<iostream>
#include"aluno.h"
#include"gestores.h"
#include "professor.h"
#include"funcoes.h"
#include <fstream>
#include <vector>


using namespace std;

int main()
{
    vector <Aluno> obj;
    vector <Professor> obj2;
    string nome;
    string cpf;
    string telefone;
    string curso;
    string matricula;

    int i = 0;

    //Lendo os alunos do arquivo
    ifstream rfile;
    rfile.open("aluno.txt");
    if (rfile.is_open()) {
        while (i!= 42) {
            getline(rfile,nome);
            getline(rfile, telefone);
            getline(rfile, cpf);
            getline(rfile, curso);
            getline(rfile, matricula);
            Aluno A(nome,telefone,cpf,curso,matricula);
            obj.push_back(A);
            i++;
        }
    rfile.close();
    }
    // for (int i =0; i <42;i++){
    //     cout << obj[i]<<"\n";
    // }

    // cout <<"\n \t\tPROFESSORES\n";
    i = 0;
    //Lendo os professores do arquivo
    ifstream rArquivo;
    rArquivo.open("proff.txt");
    if (rArquivo.is_open()) {
        while (i!= 8) {
            getline(rArquivo,nome);
            getline(rArquivo, telefone);
            getline(rArquivo, cpf);
            getline(rArquivo, curso);
            Professor A(nome,telefone,cpf,curso);
            obj2.push_back(A);
            i++;
        }
    rArquivo.close();
    }
    // for (int i =0; i <8;i++){
    //     cout << obj2[i]<<"\n";
    // }
    
    vector <Gestores> obj3;
    string login;
    string senha;
    i = 0;
    ifstream rGestores;
    rGestores.open("gestores.txt");
    if(rGestores.is_open()){
        while (i!= 1) {
            getline(rGestores, nome);
            getline(rGestores, telefone);
            getline(rGestores, cpf);
            getline(rGestores, login);
            getline(rGestores, senha);
            Gestores A(nome,telefone,cpf,login,senha);
            obj3.push_back(A);
            i++;
    }}

    // cout << "\n\t\tGestores\n";

    // for (int i =0; i <1;i++){
    //     cout << obj3[i]<<"\n";
    // }

    
    Menu(obj,obj2,obj3);
    return 0;
}
