#ifndef NO_H
#define NO_H
#include "Aresta.h"
#include <list>
using namespace std;
class No :public Aresta
{
    public:

        No(int id);

        virtual ~No();
        int getIdNo();
        void setArestaAdj(Aresta *adj);
    protected:

    private:

        int _idNo;
        list<Aresta> *_adj;
};

#endif // NO_H
