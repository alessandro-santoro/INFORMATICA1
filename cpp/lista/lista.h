#ifndef lista_h
#define lista_h
#include <iostream>

struct nodo{
    int dato;
    nodo * next;

}typedef nodo;

class lista{

    private:
        nodo*testa;
    public:
    lista(){
        testa=NULL;

    }

    void pusch(int);
    void pop();
    void top();
    void printf();
    
}