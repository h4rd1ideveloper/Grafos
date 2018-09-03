#include "No.h"
#include "Aresta.h"
No::No(int id)
{
    this->_idNo = id;
}
void No::setArestaAdj(Aresta *Adj) {
    this->_adj.push_back(Adj);
}

No::~No()
{
    //dtor
}
