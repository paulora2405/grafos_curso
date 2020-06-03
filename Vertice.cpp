#include "Vertice.hpp"

unsigned short Vertice::proxId{0};

Vertice::Vertice(){
    //this->id = Vertice::proxId;
    Vertice::proxId++;
}

bool Vertice::getInaccessible(){
    return this->inaccessible;
}

void Vertice::changeInaccessible() {
    if(this->inaccessible ==true) this->inaccessible = false;
    else this->inaccessible = true;
}