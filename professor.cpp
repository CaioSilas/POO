#include"professor.h"

Professor ::Professor(string nome,string telefone,string cpf,string ministra) : Pessoa(nome,telefone,cpf), ministra(ministra){}

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

Professor& Professor :: operator=(const Professor& P){
    if (this == &P){
        return *this;
    }
    this->ministra = P.ministra;
    this->setNome(P.getNome());
    this->setTelefone(P.getTelefone() );
    this->setCpf(P.getCpf());

    return *this;
}