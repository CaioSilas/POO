#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <string>

using namespace std;

class Pessoa {
  private:
    string nome;
    string cpf;
    string telefone;
  public:
    //construtores da classe
    Pessoa(string nome, string cpf, string telefone);
    Pessoa();
    //seta nome classe
    void setNome(string nome);
    //retorna nome classe
    string getNome();
    //seta cpf
    void setCpf(string nome);
    //retorna cpf
    string getCpf();
    //seta telefone
    void setTelefone(string nome);
    //retorna telefone
    string getTelefone();
};

#endif