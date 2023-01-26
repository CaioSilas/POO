#ifndef professor_h
#define professor_h

#include"Pessoa.h"

using namespace std;

class Professor : public Pessoa{
    string ministra;
public:
    Professor(string ="",string ="",string = "",string="");
    void setMinistra(string);
    string getMinistra()const;
    friend ostream& operator<<(ostream&, const Professor&);
    Professor& operator=(const Professor& P);
    //friend Gestores;
};


#endif