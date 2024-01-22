#include <iostream>
#include <cmath>
#include "rettangolo.h"

using namespace std;

rettangolo::rettangolo(){};
rettangolo::rettangolo(double x)
{
    base = x;
    altezza = x;
}

rettangolo::rettangolo(double x, double y)
{
    base = x,
    altezza = y;

}

void rettangolo::setbase(double base)
{
    this -> base=base;
}

void rettangolo::setaltezza(double altezza)
{
    this -> altezza=altezza;
}

 getbase()
        {
            return base;
        }

        int getaltezza()
        {
            return altezza;
        }

        double perimetro()
        {
            return base * 2 + altezza * 2;
        }

        double area()
        {
            return base * altezza;
        }

        double diagonale()
        {
            return sqrt( base* base)+(altezza*altezza);
        }

        void stampa()
        {
            cout<<"bare:" <<base <<endl;
            cout<<"altezza:" <<altezza <<endl;
            cout<<"perimetro:" <<perimetro() <<endl;
            cout<<"area:" <<area() <<endl;
            cout<<"diagonale:" <<diagonale() <<endl;
        }
}

