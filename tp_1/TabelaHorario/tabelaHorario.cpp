#include "tabelaHorario.h"

void TabelaHorario::addSala(int quantSalas) {
  for (int i = 0; i < quantSalas; i++) {
    this->tabela.push_back(vector<string>(5, ""));
  }
}

void TabelaHorario::marcaTabela(int sala, int dia, string curso) {
  // cout << sala << " " << dia << curso << endl;
  int tamanhoTabela = this->tabela.size();
  if(tamanhoTabela <= sala) {
    addSala(sala - tamanhoTabela + 1);
  }

  this->tabela[sala][dia] = curso;
}

void TabelaHorario::printSalaDia(string curso) {
  int sizeTabela = this->tabela.size();
  for (int i = 0; i < sizeTabela; i++) {
    for (int j = 0; j < 5; j++) {
      if (this->tabela[i][j].compare(curso) == 0) {
        cout << "Sala: " << i + 1 << endl;
        cout << "Dia: ";
        if(j == 0) {
          cout << "Segunda" << endl << endl;
        }
        if(j == 1) {
          cout << "Terca" << endl << endl;
        }
        if(j == 2) {
          cout << "Quarta" << endl << endl;
        }
        if(j == 3) {
          cout << "Quinta" << endl << endl;
        }
        if(j == 4) {
          cout << "Sexta" << endl << endl;
        }
      }
    }
    
  }
}

void TabelaHorario:: print(vector<Professor*> professores){
  int sizeTabela = this->tabela.size();
  for (int i = 0; i < sizeTabela;i++){
    cout << "Sala: " << i + 1 << endl;
    for(int j = 0; j < 5;j++) {
      if(j == 0) {
          cout << "Segunda: ";
        }
        if(j == 1) {
          cout << "Terca: ";
        }
        if(j == 2) {
          cout << "Quarta: ";
        }
        if(j == 3) {
          cout << "Quinta: ";
        }
        if(j == 4) {
          cout << "Sexta: ";
        }
      cout << this->tabela[i][j] << endl;
    }
    cout << endl;
  }
  int sizeProfessor = professores.size();
  for (int i = 0; i < sizeProfessor; i++) {
    cout << *professores[i] << endl;
  }
  
}

vector<int> TabelaHorario::getHorarios(string nomeCurso) { 
  vector<int> posicoes;
  int sizeLinhas = this->tabela.size();
  for (int i = 0; i < sizeLinhas; i++) {
    for(int j = 0; j < 5; j++) {
      if (this->tabela[i][j].compare(nomeCurso) == 0) {
        posicoes.push_back(i);
        posicoes.push_back(j);
      }
    }
  }
  return posicoes;
}

vector<vector<string>> TabelaHorario::getTabela() {
  return this->tabela;
}