#ifndef SUBMENUALUNO_H
#define SUBMENUALUNO_H

#include <iostream>
#include <vector>
#include <fstream>
#include "../Aluno/aluno.h"

using namespace std;

class SubMenuAluno {
  private:
    vector<Aluno*> alunos;
  public:
    //construtor classe
    SubMenuAluno(vector<Aluno*> alunos);
    //cadastra aluno
    void cadastrar();
    //consulta aluno
    void consultar();
    //excluir aluno
    void excluir();
    //atualiza banco de dados
    void atualizar();
    // funcao de menu
    void print();
};


#endif