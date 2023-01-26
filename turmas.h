#ifndef turmas_h
#define turmas_h


#include "professor.h"
#include "aluno.h"
#include<vector>

class Turmas
{
    int codigo;
    vector <Aluno*> A;
    Professor P;
    
    public:
        void setCodigo(int codigo);
        int getCodigo();
        void setAluno(vector <Aluno*> A);
        void setProfessor(Professor P);
};





#endif