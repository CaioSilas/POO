#ifndef HORARIO_H
#define HORARIO_H

#include <string> 
#include <algorithm> 
#include <iterator> 
#include <map>
#include<vector>

#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <typeinfo>

#include"aluno.h"
#include"gestores.h"
#include"Pessoa.h"
#include"professor.h"


using namespace std;



class Sala{
    vector <Aluno> alunos;
    vector <Professor> professores;
    vector <Gestores> gestores;
    
    public:
        Sala(vector alunos,vector professores,vector gestores);
        void setAlunos(Aluno alunos);
        vector getAlunos();
        void setProfessores(Professor professores)
        vector getProfessores();
        void setGestores(Gestores gestores);
        vector getGestores();
};








#endif