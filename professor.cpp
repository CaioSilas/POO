#include"professor.h"

Professor ::Professor(string nome,int telefone,int cpf,string ministra) : Pessoa(nome,telefone,cpf), ministra(ministra){}

void Professor ::setMinistra(string x){
    this->ministra = x;
}

string Professor::getMinistra()const {
    return ministra;
}

ostream& operator<<(ostream& out, const Professor& proff){
    out <<"nome :"<<proff.getNome() <<"\ntelefone :" << proff.getTelefone ()<< "\ncpf :"<<proff.getCpf() << "\nMinistra :" <<proff.ministra<<"\n";
    return out;
}