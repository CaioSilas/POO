#ifndef ALUNO_H
#define ALUNO_H

#include "../Pessoa/pessoa.h"

class Aluno : public Pessoa {
  private:
    string curso;
    string matricula;
  public:
    //construtores classe
    Aluno(string nome, string cpf, string telefone, string curso, string matricula);
    Aluno();
    //seta curso aluno
    void setCurso(string curso);
    //retorna curso aluno
    string getCurso();
    //seta matricula aluno
    void setMatricula(string matricula);
    //retorna matricula aluno
    string getMatricula();
    //sobrecarrega ==
    friend bool operator==(Aluno& a, Aluno& b);
    //sobrecarrega <<
    friend ostream& operator<<(ostream&, Aluno&);
    
};

#endif