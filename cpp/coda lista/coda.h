#ifndef CODA_H
#define CODA_H

#include <iostream>
using namespace std;

struct nodo{

    int info;
    struct nodo * next;

}typedef nodo;

class coda{

    private: 
        nodo * testa;
        nodo * p;


    public: 

        coda(){

            testa = NULL;
        }

        void push(int);
        void pop();
        int top();
        void stampa();


}