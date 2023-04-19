#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "formabasica.h"


class Triangulo : public FormaBasica
{
    public:
        Triangulo();
        ~Triangulo();
        Triangulo(const double, const double, const int, const int, const int, const double, const double);
        Triangulo(const Triangulo&);

        // operator overload
        Triangulo& operator=(const Triangulo&);
        friend ostream& operator<<(ostream&, Triangulo&);
        friend istream& operator>>(istream&, Triangulo&);

        // métodos set
        void setBase(double);
        void setAltura(double);

        // métodos get
        double getBase(void);
        double getAltura(void);

        // outros métodos
        void imprime(void);
        double area(void);

    private:
        double base;
        double altura;
};

#endif // TRIANGULO_H
