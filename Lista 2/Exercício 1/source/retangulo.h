#ifndef RETANGULO_H
#define RETANGULO_H

#include "formabasica.h"


class Retangulo : public FormaBasica
{
    public:
        Retangulo();
        Retangulo(const double, const double, const int, const int, const int, const double, const double);
        Retangulo(const Retangulo&);
        virtual ~Retangulo();

        // operator overload
        Retangulo& operator=(const Retangulo&);
        friend ostream& operator<<(ostream&, Retangulo&);
        friend istream& operator>>(istream&, Retangulo&);

        // métodos set
        void setLargura(double);
        void setAltura(double);

        // métodos get
        double getLargura(void);
        double getAltura(void);

        // outros métodos
        virtual void imprime(void);
        double area(void);

    protected:
        double largura;
        double altura;
};

#endif // RETANGULO_H
