#ifndef SUBMENURELATORIO_H
#define SUBMENURELATORIO_H

#include <iostream>
#include <vector>
#include <fstream>
#include "../Aluno/aluno.h"
#include "../Professor/professor.h"
#include "../Curso/curso.h"
#include "../TabelaHorario/TabelaHorario.h"



using namespace std;

class SubMenuRelatorio {
  private:
    vector<Aluno*> alunos;
    vector <Professor*> professores;
    vector <Curso*> curso;
    TabelaHorario *tabela;
    
  public:
    //construtor da classe
    SubMenuRelatorio(vector<Aluno*> alunos,vector<Professor*> professores,vector<Curso*> curso,TabelaHorario *tabela);
    //funcao principal do menu
    void print();
    //todas as funcoes abaixo apresentam os relatorios referentes as classes
    //curso
    void atualizarCurso();
    //aluno
    void atualizarAluno();
    //sala
    void atualizarSala();
    //professor
    void atualizarProfessores();
};


#endif