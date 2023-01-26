#include "turmas.h"

void Turmas:: setCodigo(int x){
    this->codigo = x;
}

int Turmas:: getCodigo() {
    return this->codigo;
}

void Turmas:: setAluno(Aluno* aluno){
    this->alunos.push_back(aluno);
}

void Turmas:: setProfessor(Professor professor){
    this->professor = professor;
}