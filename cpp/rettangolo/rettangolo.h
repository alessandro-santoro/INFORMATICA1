#ifndef RETTANGOLO_H
#define RETTANGOLO_H

class rettangolo
{
    private:
        double base;
        double altezza;
    
    public:
        rettangolo();
        rettangolo(double);
        rettangolo(double,double);
        void setbase(double);
        void setaltezza(double);
        double getbase();
        double getaltezza();
        double calcola_perimetro();
        double calcola_area();
        double calcola_diagonale();
        void stampa();
        void set_tutto(double altezza=1, double base=1)
        {
            this->altezza = altezza;
            this->base = base;
        }
}
#endif