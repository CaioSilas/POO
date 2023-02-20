#include "subMenuCurso.h"


SubMenuCurso::SubMenuCurso(vector<Curso*> cursos, TabelaHorario tabela) {
  this->cursos = cursos;
  this->tabela  = tabela.getTabela();
}

void SubMenuCurso::cadastrar(TabelaHorario *tabela) {
  cout << "Para cadastrar um curso: ";
  string curso;
  cin >> curso;

  Professor *professor = new Professor();
  Curso *cursos = new Curso(professor, curso);
  this->cursos.push_back(cursos);

  int sizeVetor = this->tabela.size();
  for(int i = 0; i < sizeVetor; i++) {
    for(int j = 0; j < 5; j++) {
      if((this->tabela[i][j] == "")) {
        if(!cursos->aloca()) {
          break;
        }
        tabela->marcaTabela(i, j, curso);
      }
    }
  }

  cout << "Curso cadastrado" << endl;
}

void SubMenuCurso::consultar() {
  int tamanhoCurso = this->cursos.size();
  string valor;
  cout << "Qual curso vc deseja consulta: ";
  cin >> valor;
  for (int i = 0; i < tamanhoCurso; i++){
    if (valor.compare(this->cursos[i]->getNome()) == 0){
      cout << *this->cursos[i]->getProfessor() << endl;

      int sizeAlunos = this->cursos[i]->getAlunos().size();
      for (int j = 0; j < sizeAlunos; j++) {
        cout << *this->cursos[i]->getAlunos()[j] << endl;
      }
    }
  }

}

void SubMenuCurso::excluir() {
  cout << "Para excluir um curso informe o nome dele: " << endl;
  string nome;

  int sizeVetor = this->cursos.size();
  for(int i = 0; i < sizeVetor; i++) {
    if((this->cursos[i]->getNome().compare(nome) == 0)) {
      this->cursos.erase(this->cursos.begin() + i);
      cout << "Curso excluido" << endl;
      break;
    }
  }
}

void SubMenuCurso::atualizar(TabelaHorario tabela) {
  ofstream arquivo;
  arquivo.open("curso.txt");
  if(arquivo.is_open()) {
    int sizeCursos = this->cursos.size();
    for (int i = 0; i < sizeCursos; i++) {
      vector<int> auxiliar = tabela.getHorarios(this->cursos[i]->getNome());
      arquivo << this->cursos[i]->getNome() << ";" << auxiliar[0] << ";" << auxiliar[1] << ";" << auxiliar[2] << ";" << auxiliar[3] << ";\n";
    }
  }
}

void SubMenuCurso::print(TabelaHorario *tabela) {
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
        cadastrar(tabela);
        break;  

      case 2:
        consultar();
        break;
      
      case 3:
        excluir();
        break;
      
      case 4:
        atualizar(*tabela);
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