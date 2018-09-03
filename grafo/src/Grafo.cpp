#include "grafo.h"

grafo::grafo(int NumVertices)
{
    this->uso = 0;
    this->vertices = NumVertices;
    this->arestas* = new list<Aresta> arestas(NumVertices);
}
void grafo::setVertice(int v) {
    this->vertices = v;
}
void grafo::addAresta(int x, int y) {
    if(this->uso < this->getNumVertices()){
        N1* = new No(x);
        N2* = new No(y);
        aresta = new Aresta(N1, N2);
        aresta->setIdAresta(this->uso);
        N1->setArestaAdj(aresta);
        N2->setArestaAdj(aresta);
        this->arestas.push_back(aresta);
        setUso();
    }


}
void grafo::setUso() {
    this->uso+=1;
}
grafo::~grafo()
{
    //dtor
}
