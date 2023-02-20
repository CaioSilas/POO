#include "subMenuAluno.h"

SubMenuAluno::SubMenuAluno(vector<Aluno*> alunos) {
  this->alunos = alunos;
}

void SubMenuAluno::cadastrar() {
  cout << "Para cadastrar um aluno passe os seguintes parametros" << endl;
  string nome;
  string cpf;
  string telefone;
  string curso;
  string matricula;

  cout << "Nome: ";
  cin >> nome;
  cout << "Cpf: ";
  cin >> cpf;
  cout << "Telefone: ";
  cin >> telefone;
  cout << "Curso: ";
  cin >> curso;
  cout << "Matricula: ";
  cin >> matricula;

  Aluno *aluno = new Aluno(nome, cpf, telefone, curso, matricula);
  this->alunos.push_back(aluno);
  cout << "Aluno cadastrado" << endl;
}

void SubMenuAluno::consultar() {
  string nomeAluno;
  cout << "Digite o nome do aluno: ";
  cin >> nomeAluno;

  bool naoAchou = true;

  int sizeAlunos = this->alunos.size();
  vector<Aluno*> temp = this->alunos;
  for (int i = 0; i < sizeAlunos; i++) {
    if(this->alunos[i]->getNome().compare(nomeAluno) == 0) {
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
    cout << "Aluno nao encontrado!!" << endl << endl;
  }
}

void SubMenuAluno::excluir() {
  cout << "Para excluir um aluno passe as seguintes informacoes: " << endl;
  cout << "Nome: " << endl;
  string nomeAluno;
  cin >> nomeAluno;
  cout << "Matricula: " << endl;
  string matricula;
  cin >> matricula;

  int sizeAlunos = this->alunos.size();
  for(int i = 0; i < sizeAlunos; i++) {
    if((this->alunos[i]->getNome().compare(nomeAluno) == 0) && (this->alunos[i]->getMatricula().compare(matricula) == 0)) {
      this->alunos.erase(this->alunos.begin() + i);
      cout << "Aluno excluido" << endl;
      break;
    }
  }
}

void SubMenuAluno::atualizar() {
  ofstream arquivo;
  arquivo.open("aluno.txt");
  if(arquivo.is_open()) {
    int sizeVetor = this->alunos.size();
    for (int i = 0; i < sizeVetor; i++) {
      arquivo << this->alunos[i]->getNome() << ";" << this->alunos[i]->getCpf() << ";" << this->alunos[i]->getTelefone() << ";" << this->alunos[i]->getCurso() << ";" << this->alunos[i]->getMatricula() << ";\n";
    }
  }
}

void SubMenuAluno::print() {
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