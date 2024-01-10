#include<iostream>
using namespace std;
class Frazione {
    private:
    int numeratore;
    int denominatore;

    public:
    Frazione () {}; //costuttore
    void setnumeratore(int n)
    {
        numeratore=n;
    }
    void setdenominatore(int d)
    {
        denominatore=d;
    }

    int getnumeratore()
    {
        return numeratore;
    }

    int getdeniminatore()
    {
        return denominatore;
    }
    
    void stampa()
    {
        cout<< numeratore << "/" << denominatore << endl;
    }

    int MCD( int x, int y)
    {
        int a,b;

        if (y<x)
        {
            a=x;
            x=y;
            y=a;
        }

        do{
            b=y % a;
            x = y;
            y = b;
        } while(y!=0)

        return x;
    }

    void ridux()
    {
        
    }
};

int main ()
{
    Frazione f1;

    f1.setnumeratore(12);
    f1.setdenominatore(5);
    f1.stampa();
}