#ifndef funcoes_h
#define Funcoes_h

#include <string> 
#include <algorithm> 
#include <iterator> 
#include <map>

#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <typeinfo>

#include"aluno.h"
#include"gestores.h"
#include"Pessoa.h"
#include"professor.h"


int Menu();
int gerenciaAluno(int);
int gerenciarProfessor(int);
int gerenciarCurso(int);
int cadastrarSala(int);
int gerarRelatorio(int);








#endif