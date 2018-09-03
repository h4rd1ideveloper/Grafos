#include "Grafo.h"

Grafo::Grafo(int V)
{
    this->V = V; // atribui o n�mero de v�rtices
    adj = new list<int>[V]; // cria as listas
}
void Grafo:: removeAresta(int v1, int v2) {
 adj[v1].remove(v2);
}

void Grafo::adicionarAresta(int v1, int v2)
{
    // adiciona v�rtice v2 � lista de v�rtices adjacentes de v1
    adj[v1].push_back(v2);
}

int Grafo::obterGrauDeSaida(int v)
{
    // basta retornar o tamanho da lista que � a quantidade de vizinhos
    return adj[v].size();
}

bool Grafo::existeVizinho(int v1, int v2)
{
    if(find(adj[v1].begin(), adj[v1].end(), v2) != adj[v1].end())
        return true;
    return false;
}

void Grafo::dfs(int v)
{
	stack<int> pilha;
	bool visitados[V]; // vetor de visitados

	// marca todos como n�o visitados
	for(int i = 0; i < V; i++)
		visitados[i] = false;

	while(true)
	{
		if(!visitados[v])
		{
			cout << "Visitando vertice " << v << " ...\n";
			visitados[v] = true; // marca como visitado
			pilha.push(v); // insere "v" na pilha
		}

		bool achou = false;
		list<int>::iterator it;

		// busca por um vizinho n�o visitado
		for(it = adj[v].begin(); it != adj[v].end(); it++)
		{
			if(!visitados[*it])
			{
				achou = true;
				break;
			}
		}

		if(achou)
			v = *it; // atualiza o "v"
		else
		{
			// se todos os vizinhos est�o visitados ou n�o existem vizinhos
			// remove da pilha
			pilha.pop();
			// se a pilha ficar vazia, ent�o terminou a busca
			if(pilha.empty())
				break;
			// se chegou aqui, � porque pode pegar elemento do topo
			v = pilha.top();
		}
	}
}


void Grafo::bfs(int v)
{
	queue<int> fila;
	bool visitados[V]; // vetor de visitados

	for(int i = 0; i < V; i++)
		visitados[i] = false;

	cout << "Visitando vertice " << v << " ...\n";
	visitados[v] = true; // marca como visitado

	while(true)
	{
		list<int>::iterator it;
		for(it = adj[v].begin(); it != adj[v].end(); it++)
		{
			if(!visitados[*it])
			{
				cout << "Visitando vertice " << *it << " ...\n";
				visitados[*it] = true; // marca como visitado
				fila.push(*it); // insere na fila
			}
		}

		// verifica se a fila N�O est� vazia
		if(!fila.empty())
		{
			v = fila.front(); // obt�m o primeiro elemento
			fila.pop(); // remove da fila
		}
		else
			break;
	}
}
bool Grafo::dfsBool(int v)
{
	stack<int> pilha;
	bool visitados[V], pilha_rec[V];

	// inicializa visitados e pilha_rec com false
	for(int i = 0; i < V; i++)
		visitados[i] = pilha_rec[i] = false;

	// faz uma DFS
	while(true)
	{
		bool achou_vizinho = false;
		list<int>::iterator it;

		if(!visitados[v])
		{
			pilha.push(v);
			visitados[v] = pilha_rec[v] = true;
		}

		for(it = adj[v].begin(); it != adj[v].end(); it++)
		{
			// se o vizinho j� est� na pilha � porque existe ciclo
			if(pilha_rec[*it])
				return true;
			else if(!visitados[*it])
			{
				// se n�o est� na pilha e n�o foi visitado, indica que achou
				achou_vizinho = true;
				break;
			}
		}

		if(!achou_vizinho)
		{
			pilha_rec[pilha.top()] = false; // marca que saiu da pilha
			pilha.pop(); // remove da pilha
			if(pilha.empty())
				break;
			v = pilha.top();
		}
		else
			v = *it;
	}

	return false;
}

bool Grafo::temCiclo()
{
	for(int i = 0; i < V; i++)
	{
		if(dfsBool(i))
			return true;
	}
	return false;
}
