#include "gestor.h"

Gestor::Gestor(string name, string cpf, string telefone, string login, string senha) :
  Pessoa(name, cpf, telefone), login(login), senha(senha) {}

Gestor::Gestor() {
  Pessoa();
  login = "";
  senha = "";
}

void Gestor::setLogin(string login) {
  this->login = login;
}

string Gestor::getLogin() {
  return login;
}

void Gestor::setSenha(string senha) {
  this->senha = senha;
}

string Gestor::getSenha() {
  return senha;
}

bool operator==(Gestor &a, Gestor &b) {
  return (a.getNome() == b.getNome());
}