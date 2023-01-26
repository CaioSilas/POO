#include "turmas.h"

void Turmas:: setCodigo(int x){
    this->codigo = x;
}

void Turmas:: setAluno(vector <Aluno*>&aluno){
    this->aluno = aluno;
}

void Turmas:: setProfessor(Professor &P){
    this->professor = &P;
}