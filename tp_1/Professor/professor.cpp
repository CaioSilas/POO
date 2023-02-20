#include "professor.h"

Professor::Professor(string nome, string cpf, string telefone, string cursoMinistrado) :
  Pessoa(nome, cpf, telefone), cursoMinistrado(cursoMinistrado) {}

Professor::Professor() {
  Pessoa();
  cursoMinistrado = "";
}

void Professor::setCursoMinistrado(string cursoMinistrado) {
  this->cursoMinistrado = cursoMinistrado;
}

string Professor::getCursoMinistrado() {
  return cursoMinistrado;
}

Professor& Professor :: operator=(Professor &P){
    if (this == &P){
        return *this;
    }
    this->cursoMinistrado = P.cursoMinistrado;
    this->setNome(P.getNome());
    this->setTelefone(P.getTelefone() );
    this->setCpf(P.getCpf());

    return *this;
}

bool operator==(Professor& a, Professor& b) {
  return (a.getNome() == b.getNome());
}

ostream& operator<<(ostream& out, Professor  &proff){
  out <<"nome: "<<proff.getNome() << "\nMinistra: " <<proff.cursoMinistrado<<"\n";
  return out;
}