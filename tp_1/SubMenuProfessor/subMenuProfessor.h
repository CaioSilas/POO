#ifndef SUBMENUPROFESSOR_H
#define SUBMENUPROFESSOR_H

#include <iostream>
#include <vector>
#include <fstream>
#include "../Professor/professor.h"

using namespace std;

class SubMenuProfessor {
  private:
    vector<Professor*> professores;
  public:
    //construtor da classe
    SubMenuProfessor(vector<Professor*> professores);
    //cadastra prof
    void cadastrar();
    //consulta prof
    void consultar();
    //exclui prof
    void excluir();
    //atualiza banco de dados
    void atualizar();
    //funcao de menu
    void print();
};


#endif