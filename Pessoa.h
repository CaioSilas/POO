#ifndef pessoa_H
#define pessoa_H

#include<string>
#include <iostream>
#include<iomanip>

using namespace std;


class Pessoa
{
    string nome;
    int telefone;
    int cpf;

public:
    Pessoa(string= "",int=0,int=0);
    void setNome(string);
    string getNome()const;
    void setTelefone(int);
    int getTelefone()const;
    void setCpf(int);
    int getCpf()const;
    friend ostream& operator <<(ostream&, const Pessoa&);
};

#endif //CLASS_H
