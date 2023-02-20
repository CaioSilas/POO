#ifndef SUBMENUCURSO_H
#define SUBMENUCURSO_H

#include <iostream>
#include <vector>
#include <fstream>
#include "../Curso/curso.h"
#include "../Professor/professor.h"
#include "../TabelaHorario/tabelaHorario.h"

using namespace std;

class SubMenuCurso {
  private:
    vector<Curso*> cursos;
    vector<vector<string>> tabela;
  public:
    //construtor classe
    SubMenuCurso(vector<Curso*> cursos, TabelaHorario tabela);
    //cadastra curso
    void cadastrar(TabelaHorario *);
    //consulta curso
    void consultar();
    //exclui curso
    void excluir();
    //atualiza banco de dados
    void atualizar(TabelaHorario);
    //funcao de menu
    void print(TabelaHorario *);
};


#endif