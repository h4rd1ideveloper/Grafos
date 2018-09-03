#ifndef GRAFO_H
#define GRAFO_H
#include <list>
#include "Aresta.h"
#include "No.h"

using namespace std;
class grafo
{
    public:
        /** Default constructor */
        grafo();
        /** Default destructor */
        virtual ~grafo();
        void addAresta(int x, int y);
        int getNumVertices();

    protected:

    private:
        void setUso();
        void setVertice(int v);
        void addVertice();
        int uso;
        int vertices;
        bool Ponderado();
        list<Aresta> arestasNoGrafo;
};

#endif // GRAFO_H
