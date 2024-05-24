#ifndef LISTA_H
#define LISTA_H

#include <iostream>
using namespace std;

struct nodo{

    int info;
    struct nodo * next;

}typedef nodo;

class lista{

    private: 
        nodo * testa;// il primo
        nodo * p;


    public: 

        lista(){

            testa = NULL;
        }

        void push(int);
        void pop();
        int top();
        void stampa();


}