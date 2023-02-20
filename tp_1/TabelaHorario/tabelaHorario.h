#ifndef TABELAHORARIO_H
#define TABELAHORARIO_H

#include "../Pessoa/pessoa.h"
#include "../Aluno/aluno.h"
#include "../Professor/professor.h"
#include "../Curso/curso.h"
#include <vector>
#include <iostream>
#include <string>

#define SEGUNDA 0
#define TERCA 1
#define QUARTA 2
#define QUINTA 3
#define SEXTA 4




class TabelaHorario {
  private:
    vector<vector<string>> tabela;

  public:
    //retorna tabela
    vector<vector<string>> getTabela();
    //adicina salas a tabela
    void addSala(int quantSalas);
    //marca o curso na tabela de acordo cm a sala e curso
    void marcaTabela(int sala, int dia, string curso);
    //printa os salas e os dias do curso
    void printSalaDia(string curso);
    //printa a tabela
    void print(vector<Professor*>);
    //retorna os inteiros referentes ao dia e horario que o curso e ministrado
    vector<int> getHorarios(string );

};

#endif