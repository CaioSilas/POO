#include "subMenuProfessor.h"

SubMenuProfessor::SubMenuProfessor(vector<Professor*> professores) {
  this->professores = professores;
}

void SubMenuProfessor::cadastrar() {
  cout << "Para cadastrar um professor passe os seguintes parametros" << endl;
  string nome;
  string cpf;
  string telefone;
  string curso;

  cout << "Nome: ";
  cin >> nome;
  cout << "Cpf: ";
  cin >> cpf;
  cout << "Telefone: ";
  cin >> telefone;
  cout << "Curso: ";
  cin >> curso;

  Professor *professor = new Professor(nome, cpf, telefone, curso);
  this->professores.push_back(professor);
  cout << "Professor cadastrado" << endl;
}

void SubMenuProfessor::consultar() {
  string nome;
  cout << "Digite o nome do professor: ";
  cin >> nome;

  bool naoAchou = true;

  int sizeVetor = this->professores.size();
  vector<Professor*> temp = this->professores;
  for (int i = 0; i < sizeVetor; i++) {
    if(this->professores[i]->getNome().compare(nome) == 0) {
      cout << "Aluno: " << endl;
      cout << *temp[i];
      cout << "Cpf: ";
      cout << temp[i]->getCpf() << endl;
      cout << "Telefone: ";
      cout << temp[i]->getTelefone() << endl << endl;
      naoAchou = false;
    }
  }

  if(naoAchou) {
    cout << "Professor nao encontrado!!!" << endl << endl;
  }
}

void SubMenuProfessor::excluir() {
  cout << "Para excluir um aluno passe as seguintes informacoes: " << endl;
  cout << "Nome: " << endl;
  string nome;
  cin >> nome;
  cout << "Matricula: " << endl;
  string matricula;
  cin >> matricula;

  int sizeVetor = this->professores.size();
  for(int i = 0; i < sizeVetor; i++) {
    if((this->professores[i]->getNome().compare(nome) == 0)) {
      this->professores.erase(this->professores.begin() + i);
      cout << "Professor excluido" << endl;
      break;
    }
  }
}

void SubMenuProfessor::atualizar() {
  ofstream arquivo;
  arquivo.open("professores.txt");
  if(arquivo.is_open()) {
    int sizeVetor = this->professores.size();
    for (int i = 0; i < sizeVetor; i++) {
      arquivo << this->professores[i]->getNome() << ";" << this->professores[i]->getCpf() << ";" << this->professores[i]->getTelefone() << ";" << this->professores[i]->getCursoMinistrado() << ";\n";
    }
  }
}

void SubMenuProfessor::print() {
  int opcao;

  while(opcao != 5) {
    cout << "1. Cadastrar" << endl;
    cout << "2. Consultar" << endl;
    cout << "3. Excluir" << endl;
    cout << "4. Atualizar" << endl;
    cout << "5. Voltar ao MENU INICIAL" << endl;
    cout << "6. SAIR" << endl;
    cout<< "Digite uma opcao: ";
    cin >> opcao;

    switch (opcao) {
      case 1:
        cadastrar();
        break;  

      case 2:
        consultar();
        break;
      
      case 3:
        excluir();
        break;
      
      case 4:
        atualizar();
        break;
      
      case 5:
        
        break;
      
      case 6:
        exit(1);
        break;
      
      default:
        cout << "ERROR: opcao invalida" << endl;
        break; 
    }
  }
}