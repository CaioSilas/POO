#ifndef CURSO_H
#define CURSO_H

#include "../Pessoa/pessoa.h"
#include "../Aluno/aluno.h"
#include "../Professor/professor.h"
#include <vector>
#include <iostream>
#include <string>

using namespace std;

class Curso {
  private: 
    Professor *professor;
    vector<Aluno*> alunos;
    string nome;
    int vezesAlocado;
  public:
    //Construtores
    Curso();
    Curso(Professor *professor, string curso);
    //retorna ponteiro professor
    Professor* getProfessor();
    //seta aluno
    void setAluno(Aluno* aluno);
    //retorna vetor alunos
    vector<Aluno*> getAlunos();
    //aloca turma
    bool aloca();
    //retorna nome curso
    string getNome();
};

#endif