#include "subMenuRelatorio.h"


SubMenuRelatorio::SubMenuRelatorio(vector<Aluno*> aluno,vector<Professor*> professores,vector <Curso*> curso,TabelaHorario *tabela) {
  this->alunos = aluno;
  this->professores = professores;
  this->curso = curso;
  this->tabela = tabela;
}

void SubMenuRelatorio::atualizarAluno() {
  ofstream arquivo;
  arquivo.open("alunoRelatorio.txt");
  if(arquivo.is_open()) {
    int sizeVetor = this->alunos.size();
    for (int i = 0; i < sizeVetor; i++) {
      arquivo << this->alunos[i]->getNome() << "\n" << this->alunos[i]->getCpf() << "\n" << this->alunos[i]->getTelefone() << "\n" << this->alunos[i]->getCurso() << "\n" << this->alunos[i]->getMatricula() << "\n\n";
    }
  }
}

void SubMenuRelatorio::atualizarProfessores() {
  ofstream arquivo;
  arquivo.open("professoresRelatorio.txt");
  if(arquivo.is_open()) {
    int sizeVetor = this->professores.size();
    for (int i = 0; i < sizeVetor; i++) {
      arquivo << this->professores[i]->getNome() << "\n" << this->professores[i]->getCpf() << "\n" << this->professores[i]->getTelefone() << "\n" << this->professores[i]->getCursoMinistrado() << "\n\n";
    }
  }
}

void SubMenuRelatorio::atualizarCurso() {
  ofstream arquivo;
  arquivo.open("cursoRelatorio.txt");
  if(arquivo.is_open()) {
    int sizeVetor = this->curso.size();
    for (int i = 0; i < sizeVetor; i++) {
      arquivo << "Curso: " << this->curso[i]->getNome() << "\n" << "Professor: " << *this->curso[i]->getProfessor() << "\n";
      int sizeAlunos = this->curso[i]->getAlunos().size();
      arquivo << "Alunos:\n";
      for (int j = 0; j < sizeAlunos; j++) {
        arquivo << *this->curso[i]->getAlunos()[j] << "\n";
      }
      
    }
  }
}

void SubMenuRelatorio::atualizarSala() {
  ofstream arquivo;
  arquivo.open("salaRelatorio.txt");
  if(arquivo.is_open()) {
    int sizecursos = this->tabela->getTabela().size();
    for (int i = 0; i < sizecursos; i++) {
      arquivo << "Sala: " << i + 1 << endl;
      for(int j = 0; j < 5;j++) {
        if(j == 0) {
          arquivo << "Segunda: ";
        }
        if(j == 1) {
          arquivo << "Terca: ";
        }
        if(j == 2) {
          arquivo << "Quarta: ";
        }
        if(j == 3) {
          arquivo << "Quinta: ";
        }
        if(j == 4) {
          arquivo << "Sexta: ";
        }
        arquivo << this->tabela->getTabela()[i][j] << endl;
      }
    }
    arquivo << endl;
  }
}



void SubMenuRelatorio::print() {
  int opcao;

  while(opcao != 5) {
    cout << "1. Aluno" << endl;
    cout << "2. Professor" << endl;
    cout << "3. Curso" << endl;
    cout << "4. Sala" << endl;
    cout << "5. Voltar ao MENU INICIAL" << endl;
    cout << "6. SAIR" << endl;
    cout<< "Digite uma opcao: ";
    cin >> opcao;
    cout << "DESEJA PRENCHER UM AQUIVO OU VE NA TELA?\n1)Arquivo\n2)Tela" << endl;
    int i;
    cin >> i;
    switch (opcao) {
      
      case 1:
        if (i == 1) {
          atualizarAluno();
        }
        else if (i == 2){
          int tam = this->alunos.size();
          for (int i = 0; i < tam; i++) {
            cout << *this->alunos[i] << "cpf:" << alunos[i]->getCpf()<< "\n"<< "telefone:" << alunos[i]->getTelefone() << "\n" << endl;
          }
        }
        break;  

      case 2:
        if(i == 1){
          atualizarProfessores();
        }
        else if(i == 2){
          int tam =  this->professores.size();
          for(int i = 0; i < tam; i++){
            cout << *this->professores[i] <<  "cpf:" << professores[i]->getCpf()<< "\n"<< "telefone:" << professores[i]->getTelefone() << "\n" << endl;
          }
        }
        break;
      
      case 3:
        if(i == 1){
          atualizarCurso();
        }
        else if(i == 2){
          int sizeVetor = this->curso.size();
          for (int i = 0; i < sizeVetor; i++) {
            cout << "Curso: " << this->curso[i]->getNome() << "\n" << "Professor: " << *this->curso[i]->getProfessor() << "\n";
            int sizeAlunos = this->curso[i]->getAlunos().size();
            cout << "Alunos:\n";
            for (int j = 0; j < sizeAlunos; j++) {
              cout << *this->curso[i]->getAlunos()[j] << "\n";
            }
          }
        }
        break;
      
      case 4:
        if(i == 1){
          atualizarSala();
        }
        else if(i == 2){
          int sizecursos = this->tabela->getTabela().size();
          for (int i = 0; i < sizecursos; i++) {
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
              cout << this->tabela->getTabela()[i][j] << endl;
            }
          }
        }
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