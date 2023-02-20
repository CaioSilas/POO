//CAIO SILAS DE ARAÚJO AMARO - 21.1.4111
//ELISA ALVES VELOSO - 20.2.4006
//MATEUS VIANA MASCHIETO - 21.1.4020


#include <iostream>
#include <string>
#include <fstream>
#include <sstream> 
#include <algorithm>
#include <vector>
#include "Aluno/aluno.h"
#include "Professor/professor.h"
#include "Gestor/gestor.h"
#include "Curso/curso.h"
#include "TabelaHorario/tabelaHorario.h"
#include "SubMenuAluno/submenuAluno.h"
#include "SubMenuProfessor/subMenuProfessor.h"
#include "SubMenuCurso/subMenuCurso.h"
#include "SubMenuRelatorio/subMenuRelatorio.h"

//le arquivo e preenche vetor de gestores
void inicializaGestores(vector<Gestor*> &gestores) {
  ifstream arquivo;
  arquivo.open("gestores.txt");

  if(arquivo.is_open()) {
    string linha;
    while(getline(arquivo, linha)) {
      istringstream linha_stream(linha);
      string nome, telefone, cpf, cursoMinistrado, login, senha;
      getline(linha_stream, nome, ';');
      getline(linha_stream, cpf, ';');
      getline(linha_stream, telefone, ';');
      getline(linha_stream, login, ';');
      getline(linha_stream, senha, ';');
      Gestor *gestor = new Gestor(nome, cpf, telefone, login, senha);
      gestores.push_back(gestor);
    }
    arquivo.close();
  }
}

//le arquivo e preenche vetor de professores
void inicializaProfessores(vector<Professor*> &professores) {
  ifstream arquivo;
  arquivo.open("professores.txt");

  if(arquivo.is_open()) {
    string linha;
    while(getline(arquivo, linha)) {
      istringstream linha_stream(linha);
      string nome, telefone, cpf, cursoMinistrado;
      getline(linha_stream, nome, ';');
      getline(linha_stream, cpf, ';');
      getline(linha_stream, telefone, ';');
      getline(linha_stream, cursoMinistrado, ';');
      Professor *aluno = new Professor(nome, cpf, telefone, cursoMinistrado);
      professores.push_back(aluno);
    }
    arquivo.close();
  }
}

//le arquivo e preenche vetor de alunos
void inicializaAlunos(vector<Aluno*> &alunos) {
  ifstream arquivo;
  arquivo.open("aluno.txt");

  if(arquivo.is_open()) {
    string linha;
    while(getline(arquivo, linha)) {
      istringstream linha_stream(linha);
      string nome, telefone, cpf, matricula, curso;
      getline(linha_stream, nome, ';');
      getline(linha_stream, cpf, ';');
      getline(linha_stream, telefone, ';');
      getline(linha_stream, curso, ';');
      getline(linha_stream, matricula, ';');
      Aluno *aluno = new Aluno(nome, cpf, telefone, curso, matricula);
      alunos.push_back(aluno);
    }
    arquivo.close();
  }
}

//le arquivo e preenche vetor de curso
void inicializaCursos(vector<Curso*> &cursos, vector<Professor*> professores, vector<Aluno*> alunos) {
  int tamanhoVetorProfessor = professores.size();
  for(int i = 0; i < tamanhoVetorProfessor; i++) {
    Curso *curso = new Curso(professores[i], professores[i]->getCursoMinistrado());
    cursos.push_back(curso);
  }

  int tamanhoVetorCursos = cursos.size();
  int sizeAlunos = alunos.size();
  for(int i = 0; i < tamanhoVetorCursos; i++) {
    for(int j = 0; j < sizeAlunos; j++) {
      if(cursos[i]->getNome().compare(alunos[j]->getCurso()) == 0) {
        cursos[i]->setAluno(alunos[j]);
      }
    }
  }
}

// funcao com templare para checar se existe o usuario no vetor
template <class T>
bool checaClasse(vector<T*> vetor, string nomeUsuario) {
  int tamanhoVetor = vetor.size();
  for(int i = 0; i < tamanhoVetor; i++) {
    if(vetor[i]->getNome().compare(nomeUsuario) == 0) return true;
  }
  return false;
}

// tela de login para o gestor
bool telaLogin(vector<Gestor*> gestores) {
  string login, senha;
  cout << "Login: ";
  getline(cin, login);
  cout << "Senha: ";
  getline(cin, senha);
  int sizeGestores = gestores.size();
  for(int i = 0; i < sizeGestores; i++) {
    if(gestores[i]->getLogin() == login && gestores[i]->getSenha() == senha)
      return true;
  }
  return false;
}

//le o arquivo e preenche a tabela sala/dia para os cursos
TabelaHorario inicializaTabela() {
  ifstream arquivo;
  TabelaHorario tabela;
  arquivo.open("curso.txt");

  if(arquivo.is_open()) {
    string linha;
    while(getline(arquivo, linha)) {
      istringstream linha_stream(linha);
      int xi, yi, x2i, y2i;
      string curso,x,y,x2,y2;
      getline(linha_stream, curso,';');
      getline(linha_stream, x,';');
      xi = stoi(x);
      getline(linha_stream, y,';');
      yi = stoi(y);
      getline(linha_stream, x2,';');
      x2i = stoi(x2);
      getline(linha_stream, y2,';');
      y2i = stoi(y2);
      tabela.marcaTabela(xi, yi, curso);
      tabela.marcaTabela(x2i, y2i, curso);
    }
    arquivo.close();
  }
  return tabela;
}

//funcao utilizada pelos professores
void visualizaProfessor(vector <Curso*> cursos,string nomeUsuario, TabelaHorario tabela){
  int tamanhoVetor = cursos.size();
  for(int i = 0; i < tamanhoVetor; i++) {
    if(cursos[i]->getProfessor()->getNome().compare(nomeUsuario) == 0) {
      cout << "Curso ministrado: " << endl;
      cout << cursos[i]->getNome() << endl << endl;
      tabela.printSalaDia(cursos[i]->getNome());
      cout << "Alunos matriculados: " << endl;
      int sizeAlunos = cursos[i]->getAlunos().size();
      for(int j = 0; j < sizeAlunos; j++) {
        cout << *cursos[i]->getAlunos()[j] << endl;
      }
    }
  }
}


//funcao do menu para gestores
void menu(vector <Aluno*> alunos, vector <Professor*> professores,vector <Curso*> cursos, TabelaHorario tabela) {
  int opcao = 0;
  while(opcao != 5) {
    cout << "1. Gerenciar Aluno" << endl;
    cout << "2. Gerenciar Professor" << endl;
    cout << "3. Gerenciar Curso" << endl;
    cout << "4. Cadastrar Sala" << endl;
    cout << "5. Gerar Relatorio" << endl;
    cout << "6. SAIR" << endl;
    cout<< "Digite uma opcao: ";
    cin >> opcao;
    if(opcao == 1) {
      SubMenuAluno subAluno(alunos);
      subAluno.print();
    }
    else if(opcao == 2) {
      SubMenuProfessor subProfessor(professores);
      subProfessor.print();
    }
    else if(opcao == 3) {
      SubMenuCurso subCurso(cursos, tabela);
      subCurso.print(&tabela);
    }
    else if(opcao == 4) {
      tabela.addSala(1);
      cout << "Sala Cadastrada!!" << endl;
    }
    else if(opcao == 5) {
      SubMenuRelatorio subRelatorio(alunos,professores,cursos,&tabela);
      subRelatorio.print();
    }
    else if(opcao == 6) {
      exit(1);
    }
    else {
        cout << "ERROR: opcao invalida" << endl;
        break;
    }
  }
}

int main(void) {

  // inicializa os vetores a partir dos arquivos de entrada
  vector<Aluno*> alunos;
  inicializaAlunos(alunos);
  vector<Professor*> professores;
  inicializaProfessores(professores);
  vector<Gestor*> gestores;
  inicializaGestores(gestores);
  vector<Curso*> cursos;
  inicializaCursos(cursos, professores, alunos);

  // inicializa a tabela de horario
  TabelaHorario tabela = inicializaTabela();

  string nomeUsuario;
  cout << "Digite o seu nome: ";
  getline(cin, nomeUsuario);

  // confere se o usuario e prof, aluno ou gestor
  bool ehAluno = checaClasse<Aluno>(alunos, nomeUsuario);
  bool ehProfessor = checaClasse<Professor>(professores, nomeUsuario);
  bool ehGestor = checaClasse<Gestor>(gestores, nomeUsuario);

  if(ehGestor) {
    bool logged = telaLogin(gestores);
    if(logged) {
      menu(alunos, professores, cursos, tabela);
    }
  }
  else if (ehProfessor){
    visualizaProfessor(cursos,nomeUsuario, tabela);
  }
  else if(ehAluno) {
    tabela.print(professores);
  }

  return 1;
}