#include "aluno.h"

Aluno::Aluno(string nome, string cpf, string telefone, string curso, string matricula) :
  Pessoa(nome, cpf, telefone), curso(curso), matricula(matricula) {}

Aluno::Aluno() {
  Pessoa();
  curso = "";
  matricula = "";
}

void Aluno::setCurso(string curso) {
  this->curso = curso;
}

string Aluno::getCurso() {
  return curso;
}

void Aluno::setMatricula(string matricula) {
  this->matricula = matricula;
}

string Aluno::getMatricula() {
  return matricula;
}

bool operator==(Aluno &a1, Aluno &a2) {
  return (a1.getNome() == a2.getNome() && a1.getMatricula() == a2.getMatricula());
}

ostream& operator<<(ostream& out, Aluno& aluno){
    out <<"nome: "<<aluno.getNome() << "\n" << "curso: " <<aluno.curso <<"\nmatricula: "<<aluno.matricula<<"\n";
    return out;
}
