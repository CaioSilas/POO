#ifndef pessoa_H
#define pessoa_H

#include<string>
#include <iostream>
#include<iomanip>

using namespace std;


class Pessoa
{
    string nome;
    string telefone;
    string cpf;

public:
    Pessoa(string= "",string="",string="");
    void setNome(string);
    string getNome()const;
    void setTelefone(string);
    string getTelefone()const;
    void setCpf(string);
    string getCpf()const;
    friend ostream& operator <<(ostream&, const Pessoa&);
};

#endif //CLASS_H
