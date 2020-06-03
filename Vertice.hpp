#ifndef VERTICE_H
#define VERTICE_H

#include<iostream>
#include <list>
#include "Aresta.hpp"


class Vertice {
public:
    Vertice();
    ~Vertice();

    bool getInaccessible();
    void changeInaccessible();

    


private:
    static unsigned short proxId;
    bool inaccessible = true;
    std::list<Aresta*> arestas;
};

#endif