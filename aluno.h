#ifndef aluno_H
#define aluno_H


#include"Pessoa.h"

using namespace std;


class Aluno : public Pessoa{

    string curso;
    int matricula;

public:
    Aluno(string ="",int = 0,int = 0,string =0,int =0);
    void setCurso(string);
    string getCurso()const;
    void setMatricula(int);
    int getMatricula()const;
    // int menuAluno(int);

    friend ostream& operator<<(ostream&, const Aluno&);
    //friend Gestores;

};


#endif