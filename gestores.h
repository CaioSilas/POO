#ifndef GESTORES_H
#define GESTORES_H

#include "Pessoa.h"

using namespace std;

class Gestores : public Pessoa{
    string login;
    string senha;
public:
    Gestores (string = "",string ="",string ="",string ="",string="");
    void setLogin(string);
    void setSenha(string);
    string getLogin()const;
    string getSenha()const;

    friend ostream& operator<<(ostream&, const Gestores&);

};




#endif