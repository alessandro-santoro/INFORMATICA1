#include <iostream>
#include "Contatore.h"
#include "ContatoreDoppio.h"


using namespace std;

int main(){
    Contatore c;

    c.stampa();

    c.inc();

    c.stampa();

    c.setPasso(3);

    c.inc();

    c.stampa();

    c.dec();

    c.stampa();

    c.setValore(10);

    c.stampa();

    cout<<"Valore: "<<c.getValore()<<endl<<"Passo: "<<c.getPasso()<<endl;    

    ContatoreDoppio c2;

    c2.stampa();

    c2.inc();

    c2.stampa();

    c2.setPasso(3);

    c2.inc();

    c2.stampa();

    c2.dec();

    c2.stampa();

    c2.setValore(10);

    c2.stampa();

    cout<<"Valore: "<<c2.getValore()<<endl<<"Passo: "<<c2.getPasso()<<endl;    
}