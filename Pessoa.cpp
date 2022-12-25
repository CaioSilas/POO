#include "Pessoa.h"

Pessoa :: Pessoa (string nome,int telefone,int cpf) : nome(nome), telefone(telefone),cpf (cpf){}

void Pessoa ::setNome(string nome){
    this->nome = nome;
}

string Pessoa ::getNome ()const {
    return nome;
}

void Pessoa ::setCpf(int cpf){
    this->cpf = cpf;
}

int Pessoa::getCpf()const {
    return cpf;
}

void Pessoa::setTelefone(int telefone){
    this->telefone = telefone;
}

int Pessoa::getTelefone()const {
    return telefone;
}

ostream& operator << (ostream& out, const Pessoa& pessoa){
    out <<"nome: "<<pessoa.nome << "\ntelefone:" << pessoa.telefone << "\ncpf:" << pessoa.cpf<< "\n";
    return out;
}


