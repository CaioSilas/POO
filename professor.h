#ifndef professor_h
#define professor_h

#include"Pessoa.h"

using namespace std;

class Professor : public Pessoa{
    string ministra;
public:
    Professor(string ="",int =0,int =0,string="");
    void setMinistra(string);
    string getMinistra()const;
    friend ostream& operator<<(ostream&, const Professor&);
    //friend Gestores;
};


#endif