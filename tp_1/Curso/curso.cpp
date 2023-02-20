#include "curso.h"

Curso::Curso() {
  Professor();
  this->vezesAlocado = 0;
  this->nome = "";
  this->alunos = vector<Aluno*>();
}

Curso::Curso(Professor *professor, string curso) : professor(professor), nome(curso)
{
  this->vezesAlocado = 0;
}

Professor* Curso::getProfessor() {
  return this->professor;
}

void Curso::setAluno(Aluno *aluno) {
  this->alunos.push_back(aluno);
}

vector<Aluno*> Curso::getAlunos() {
  return this->alunos;
}

bool Curso::aloca() {
  if(this->vezesAlocado < 2) {
    this->vezesAlocado++;
    return true;
  }
  return false;
}

string Curso::getNome() {
  return this->nome;
}