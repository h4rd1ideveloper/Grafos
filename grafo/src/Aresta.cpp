#include "Aresta.h"

Aresta::Aresta(int id,int peso=NULL,No* N1=NULL, No* N2= NULL)
{
    if(!N1){

    }else  {
        setFrontNo(N1);
        setSecondNo(N2);

    }
}
void Aresta:: SetFrontNo(No* N1) {
    this->N1 = N1;
}
void Aresta:: setSecondNo(No* N2) {
    this->N2 = N2;
}
void Aresta::setIdAresta(int id) {
    this->idAresta = id;
}
Aresta::~Aresta()
{
    //dtor
}
