#ifndef turmas_h
#define turmas_h


#include "professor.h"
#include "aluno.h"
#include<vector>

class Turmas
{
    int codigo;
    vector <Aluno*> alunos;
    Professor professor;
    
    public:
        void setCodigo(int codigo);
        int getCodigo();
        void setAluno(Aluno*);
        void setProfessor(Professor);
};





#endif