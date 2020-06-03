#ifndef GRAFO_H
#define GRAFO_H

#include "Vertice.hpp"

class Grafo{
public:
    void adicionaVertice(); 
    bool removeVertice(unsigned short idVertice);
    bool adicionaAresta(unsigned short v1, unsigned short v2);
    bool removeAresta(unsigned short v1, unsigned short v2);
    void imprimeGrafo();
};

#endif