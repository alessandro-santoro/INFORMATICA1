#include <iostream>
#include "Pila.h"
using namespace std;

int main() 
{
    Pila p(100);

    p.push(13);
    p.push(12);
    p.push(11);
    p.pop();
    p.push(10);
    p.push(15);

    p.stampa();
}