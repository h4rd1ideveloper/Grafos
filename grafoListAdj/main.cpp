#include <iostream>
#include <list>
#include <algorithm> // função find
#include "Grafo.h"
using namespace std;

int main()
{
    // criando um grafo de 4 vértices
    Grafo grafo(4);

    // adicionando as arestas
    grafo.adicionarAresta(0, 1);
    grafo.adicionarAresta(0, 3);
    grafo.adicionarAresta(1, 2);
    grafo.adicionarAresta(3, 1);
    grafo.adicionarAresta(3, 2);

    // mostrando os graus de saída
    cout << "Grau de saida do vertice 1: " << grafo.obterGrauDeSaida(1);
    cout << "\nGrau de saida do vertice 3: " << grafo.obterGrauDeSaida(3);
    cout<<endl;
    //dfs
    cout<<"Busca em profundidade"<<endl;
    grafo.dfs(0);
    cout<<endl;
    //bfs
    cout<<"Busca em largura"<<endl;
    grafo.bfs(0);
    cout<<endl;
    //Verifica se tem ciclo
    cout<<"Verificando se tem ciclo"<<endl;
    if(grafo.temCiclo()){
        cout<<"o grafo tem ciclo"<<endl;
    } else {
        cout<<"o grafo nao tem ciclo"<<endl;
    }
    cout<<endl;
    if( grafo.existeVizinho(3, 2) ){
        cout<<"3 vizinho 2"<<endl;
    }
    cout<<"removendo aresta 3 -> 2"<<endl;
    grafo.removeAresta(3,2);
    if( !grafo.existeVizinho(3, 2) ){
        cout<<"aresta 3 -> 2 Foi Excluida"<<endl;
    }
cout<<endl;
    // verifica se existe vizinhos
    if(grafo.existeVizinho(0, 1))
        cout << "\n\n1 eh vizinho de 0\n";
    else
        cout << "\n\n1 NAO eh vizinho de 0\n";

    if(grafo.existeVizinho(0, 2))
        cout << "2 eh vizinho de 0\n";
    else
        cout << "2 NAO eh vizinho de 0\n";

    return 0;
}

