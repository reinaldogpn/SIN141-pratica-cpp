#ifndef CIRCULO_H
#define CIRCULO_H

#include "formabasica.h"
#include <math.h>

class Circulo : public FormaBasica
{
    public:
        Circulo();
        Circulo(const double, const double, const int, const int, const int, const double);
        Circulo(const Circulo&);
        ~Circulo();

        //  operator overload
        Circulo& operator=(const Circulo&);
        friend ostream& operator<<(ostream&, Circulo&);
        friend istream& operator>>(istream&, Circulo&);

        // métodos set
        void setRaio(double);

        // métodos get
        double getRaio(void);

        // outros métodos
        void imprime(void);
        double area(void);

    private:
        double raio;
};

#endif // CIRCULO_H
