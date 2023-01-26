#include"funcoes.h"
#include <iostream>
#include <vector>




int gerenciarAluno(int x){
    cout <<"1. Cadastrar" << "\n2. Consultar" << "\n3. Excluir" << 
    "\n4. Atualizar" << "\n5. Voltar para o MENU INICIAL\n";
    cin >> x;
    if (x == 1){
        cout << "if 1";
    }
    // else if(x == 2){

    // }
    // else if (x == 3){

    // }
    // else if (x == 4){

    // }
    // else if (x == 5){
    //     Menu();
    // }
    return 0;
}

int gerenciarProfessor(int x){
    cout <<"1. Cadastrar" << "\n2. Consultar" << "\n3. Excluir" << 
    "\n4. Atualizar" << "\n5. Voltar para o MENU INICIAL\n";
    cin >> x;
    if (x == 1){
        cout << "if 1";
    }
    // else if(x == 2){

    // }
    // else if (x == 3){

    // }
    // else if (x == 4){

    // }
    // else if (x == 5){
    //     Menu();
    // }
    return 0;
}

int gerenciarCurso(int x){
    cout <<"1. Cadastrar" << "\n2. Consultar" << "\n3. Excluir" << 
    "\n4. Atualizar" << "\n5. Voltar para o MENU INICIAL\n";
    cin >> x;
    if (x == 1){
        cout << "if 1";
    }
    // else if(x == 2){

    // }
    // else if (x == 3){

    // }
    // else if (x == 4){

    // }
    // else if (x == 5){
    //     Menu();
    // }
    return 0;
}

int gerarRelatorio(int x){
    cout <<"1. Aluno" << "\n2. Professor" << "\n3. Curso" << 
    "\n4. Salas" << "\n5. Voltar para o MENU INICIAL\n";
    cin >> x;
    if (x == 1){
        cout << "if 1";
    }
    // else if(x == 2){

    // }
    // else if (x == 3){

    // }
    // else if (x == 4){

    // }
    // else if (x == 5){
    //     Menu();
    // }
    return 0;
}

int Menu(vector <Aluno> aluno,vector <Professor> proff, vector <Gestores> gest)
{
    vector <Turmas*> turmas;
    for(int i = 0;i < 8;i++){
        turmas[i].codigo.setcodigo(i+1);
    }

    // turmas[0].codigo = 1;
    // turmas[1].codigo = 2;
    // turmas[2].codigo = 3;
    // turmas[3].codigo = 4;
    // turmas[4].codigo = 5;
    // turmas[5].codigo = 6;
    // turmas[6].codigo = 7;
    // turmas[7].codigo = 8;

    // for (int i = 0; i < 42; i++){
    //     if (aluno[i].curso == "Matematica"){
    //         turmas[0].aluno[i] = aluno[i];
    //     }
    //     else if (aluno[i].curso == "Biologia"){
    //         turmas[1].aluno[i] = aluno[i];
    //     }
    //     else if (aluno[i].curso == "Educacao Fisica"){
    //         turmas[2].aluno[i] = aluno[i];
    //     }
    //     else if (aluno[i].curso == "Sisica"){
    //         turmas[3].aluno[i] = aluno[i];
    //     }
    //     else if (aluno[i].curso == "Portugues"){
    //        turmas[4].aluno[i] = aluno[i];
    //     }
    //     else if (aluno[i].curso == "Redacao"){
    //        turmas[5].aluno[i] = aluno[i]; 
    //     }
    //     else if (aluno[i].curso == "Quimica"){
    //        turmas[6].aluno[i] = aluno[i];
    //     }
    //     else if (aluno[i].curso == "Geografia"){
    //       turmas[7].aluno[i] = aluno[i];  
    //     }
    // }

    // for (int i = 0; i < 42; i++)
    // {
    //     cout << turmas[i] << endl;
    // }
    


    cout <<"1. Gerenciar Aluno" << "\n2. Gerenciar Professor" << "\n3. Gerenciar Curso" << 
    "\n4. Cadastrar Sala" << "\n5. Gerar Relatorio\n";
    int x;
    cin >> x;

    if (x == 1){
        gerenciarAluno(x);
    }
    else if(x == 2){
        gerenciarProfessor(x);
    }
    else if (x  == 3){
        gerenciarCurso(x);
    }
    // else if (x == 4){
    //     cadastrarSala();
    // }
    else if(x == 5) {
        gerarRelatorio(x);
    }

    return 0;

}