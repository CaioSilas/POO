#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "../Pessoa/pessoa.h"

class Professor : public Pessoa {
  private:
    string cursoMinistrado;
  public:
    //construtores da classe
    Professor(string nome, string cpf, string telefone, string cursoMinistrado);
    Professor();
    //seta curso professor
    void setCursoMinistrado(string cursoMinistrado);
    //retorna curso do professor 
    string getCursoMinistrado();
    //sobrecarga ==
    friend bool operator==(Professor&, Professor&);
    //sobrecarga =
    Professor& operator=(Professor& P);
    //sobrecarga cout
    friend ostream& operator<<(ostream&,Professor&);
};

#endif