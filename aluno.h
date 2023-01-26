#ifndef aluno_H
#define aluno_H


#include"Pessoa.h"

using namespace std;


class Aluno : public Pessoa{

    string curso;
    string matricula;

public:
    Aluno(string ="",string = "", string = "",string ="",string ="");
    void setCurso(string);
    string getCurso()const;
    void setMatricula(int);
    string getMatricula()const;
    // int menuAluno(int);

    friend ostream& operator<<(ostream&, const Aluno&);
    Aluno& operator = (const Aluno&);
    

};


#endif