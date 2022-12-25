#include"funcoes.h"
#include <iostream>



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
    else if (x == 5){
        Menu();
    }
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
    else if (x == 5){
        Menu();
    }
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
    else if (x == 5){
        Menu();
    }
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
    else if (x == 5){
        Menu();
    }
    return 0;
}

int Menu()
{   
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