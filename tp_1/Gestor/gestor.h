#ifndef GESTOR_H
#define GESTOR_H

#include "../Pessoa/pessoa.h"

class Gestor : public Pessoa {
  private:
    string login;
    string senha;
  public:
    //construtores
    Gestor(string nome, string cpf, string telefone, string login, string senha);
    Gestor();
    //seta login gestor
    void setLogin(string login);
    //retorna login gestor
    string getLogin();
    //seta senha gestor
    void setSenha(string senha);
    //retorna senha gestor
    string getSenha();
    //sobrecarrega ==
    friend bool operator==(Gestor &, Gestor&);
};

#endif