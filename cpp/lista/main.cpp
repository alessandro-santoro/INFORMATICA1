#include <iostream>
#include "lista.h"

using namespace std;

int main()
{
    lista c1;
     
    c1.push(1);
    c1.push(2);
    c1.push(3);
    c1.pop();
    c1.push(4);
    c1.push(5);
    c1.push(6);

    c1.print();

    c1.top();
}