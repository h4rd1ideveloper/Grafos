#ifndef GRAFO_H
#define GRAFO_H
#include <iostream>
#include <list>
#include <algorithm> // fun��o find
#include <stack> // pilha para usar na DFS
#include <queue> // fila para usar na BFS

using namespace std;

class Grafo
{
    int V; // n�mero de v�rtices
    list<int> *adj; // ponteiro para um array contendo as listas de adjac�ncias
public:
    Grafo(int V); // construtor
    void adicionarAresta(int v1, int v2); // adiciona uma aresta no grafo
    void removeAresta(int v1, int v2);

    // obt�m o grau de sa�da de um dado v�rtice
    // grau de sa�da � o n�mero de arcos que saem de "v"
    int obterGrauDeSaida(int v);

    bool existeVizinho(int v1, int v2); // verifica se v2 � vizinho de v1
    // faz uma DFS a partir de um v�rtice
	void dfs(int v);
	// faz uma BFS a partir de um v�rtice
	void bfs(int v);
	bool dfsBool(int v);
	bool temCiclo();

protected:

private:
};

#endif // GRAFO_H
