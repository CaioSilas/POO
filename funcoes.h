#ifndef funcoes_h
#define Funcoes_h

#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <typeinfo>

using namespace std;

#include <string> 
#include <algorithm> 
#include <iterator> 
#include <map>

#include"aluno.h"
#include"gestores.h"
#include"Pessoa.h"
#include"professor.h"
#include "turmas.h"


int Menu(vector <Aluno> aluno,vector <Professor> proff, vector <Gestores> gest);
int gerenciaAluno(int);
int gerenciarProfessor(int);
int gerenciarCurso(int);
int cadastrarSala(int);
int gerarRelatorio(int);








#endif