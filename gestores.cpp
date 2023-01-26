#include "gestores.h"


Gestores :: Gestores(string nome, string telefone, string cpf, string login, string senha) : Pessoa(nome,telefone,cpf),
login(login), senha(senha) {}

void Gestores ::setLogin(string login){
    this->login = login;
}

void Gestores ::setSenha(string senha){
    this->senha = senha;
}

string Gestores ::getLogin()const{
    return login;
}

string Gestores::getSenha()const{
    return senha;
}

ostream& operator<<(ostream& out,const Gestores& gestores){
    out <<"nome: "<<gestores.getNome() << "\ntelefone:" << gestores.getTelefone() << "\ncpf:" << gestores.getCpf() << "\n"<<
    "login :" <<gestores.login <<"\nsenha :"<<gestores.senha<<"\n";
    return out;
}