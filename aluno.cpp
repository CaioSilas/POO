#include "aluno.h"

Aluno :: Aluno(string nome, string telefone, string cpf, string curso, string matricula) : Pessoa(nome, telefone, cpf) ,
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

string Aluno::getMatricula() const{
    return matricula;
}

Aluno& Aluno :: operator=(const Aluno& P){
    if (this == &P){
        return *this;
    }
    this->curso = P.curso;
    this->matricula = P.matricula;
    this->setNome(P.getNome());
    this->setTelefone(P.getTelefone() );
    this->setCpf(P.getCpf());

    return *this;
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