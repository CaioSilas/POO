#include "Pessoa.h"

Pessoa :: Pessoa (string nome,string telefone,string cpf) : nome(nome), telefone(telefone),cpf (cpf){}

void Pessoa ::setNome(string nome){
    this->nome = nome;
}

string Pessoa ::getNome ()const {
    return nome;
}

void Pessoa ::setCpf(string cpf){
    this->cpf = cpf;
}

string Pessoa::getCpf()const {
    return cpf;
}

void Pessoa::setTelefone(string telefone){
    this->telefone = telefone;
}

string Pessoa::getTelefone()const {
    return telefone;
}

ostream& operator << (ostream& out, const Pessoa& pessoa){
    out <<"nome: "<<pessoa.nome << "\ntelefone:" << pessoa.telefone << "\ncpf:" << pessoa.cpf<< "\n";
    return out;
}


