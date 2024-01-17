# include <iostream>
# include <cmath>

using namespace std;

class rettangolo
{
    private:

        double base;
        double altezza;
    
    public:

        rettangolo()
        {
            base = 1;
            latezza =1 ;
        }

        rettangolo(double base, double altezza)
        {
            this -> base = base;
            this -> altezza = altezza;
        }

        void setbase(double base)
        {
            this -> base=base;
        }

        void setaltezza(double altezza)
        {
            this -> altezza=altezza;
        }

        int getbase()
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

int main()
{
    rettangolo r1;

    r1.setaltezza(4);
    r1.setbase(3);

    r1.stampa();
}