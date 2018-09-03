#ifndef GRAFO_H
#define GRAFO_H
#include <iostream>
#include <list>
#include <algorithm> // função find
#include <stack> // pilha para usar na DFS
#include <queue> // fila para usar na BFS

using namespace std;

class Grafo
{
    int V; // número de vértices
    list<int> *adj; // ponteiro para um array contendo as listas de adjacências
public:
    Grafo(int V); // construtor
    void adicionarAresta(int v1, int v2); // adiciona uma aresta no grafo
    void removeAresta(int v1, int v2);

    // obtém o grau de saída de um dado vértice
    // grau de saída é o número de arcos que saem de "v"
    int obterGrauDeSaida(int v);

    bool existeVizinho(int v1, int v2); // verifica se v2 é vizinho de v1
    // faz uma DFS a partir de um vértice
	void dfs(int v);
	// faz uma BFS a partir de um vértice
	void bfs(int v);
	bool dfsBool(int v);
	bool temCiclo();

protected:

private:
};

#endif // GRAFO_H
