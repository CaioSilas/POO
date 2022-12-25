#include "aluno.h"

Aluno :: Aluno(string nome, int telefone, int cpf, string curso, int matricula) : Pessoa(nome, telefone, cpf) ,
curso(curso), matricula(matricula) {}

void Aluno ::setCurso(string curso){
    this->curso = curso;
}
string Aluno ::getCurso()const{
    return curso;
}

void Aluno::setMatricula(int matricula){
    this->matricula = matricula;
}

int Aluno::getMatricula() const{
    return matricula;
}

// int Aluno::menuAluno(int x){
//     if (x == 1){

//     }
// }

ostream& operator<<(ostream& out,const Aluno& aluno){
    out <<"nome: "<<aluno.getNome() << "\ntelefone:" << aluno.getTelefone() << "\ncpf:" << aluno.getCpf() << "\n"<<
    "curso :" <<aluno.curso <<"\nmatricula :"<<aluno.matricula<<"\n";
    return out;
}