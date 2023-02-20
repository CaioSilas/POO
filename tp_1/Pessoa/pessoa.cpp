#include "pessoa.h"

Pessoa::Pessoa(string name, string cpf, string telefone) :
  nome(name), cpf(cpf), telefone(telefone) {}

Pessoa::Pessoa() {
  nome = "";
  cpf = "";
  telefone = "";
}

void Pessoa::setNome(string nome) {
  this->nome = nome;
}

string Pessoa::getNome() {
  return nome;
}

void Pessoa::setCpf(string cpf) {
  this->cpf = cpf;
}

string Pessoa::getCpf() {
  return cpf;
}

void Pessoa::setTelefone(string telefone) {
  this->telefone = telefone;
}

string Pessoa::getTelefone() {
  return telefone;
}