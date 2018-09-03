#ifndef ARESTA_H
#define ARESTA_H
#include "No.h"
#include "grafo.h"
using namespace std;

class Aresta
{
    public:
        /** Default constructor */
        Aresta(int id,No* N1=NULL, No* N2= NULL, int peso=NULL);
        /** Default destructor */
        virtual ~Aresta();
    No* getNoById(int Id);
    No* getFrontNo();
    No* getSecondNo();
    int getIdAresta();
    void setNoById(int Id);
    void setFrontNo(No* N1);
    void setSecondNo(No* N2);


    protected:

    private:
        void setIdAresta(int id);
        int idAresta;
        No *N1, *N2;
        int peso;
};

#endif // ARESTA_H
