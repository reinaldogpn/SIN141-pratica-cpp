#ifndef QUADRADO_H
#define QUADRADO_H

#include "retangulo.h"

/** A classe Quadrado herda diretamente da classe Retangulo,
e não da classe base FormaBasica, pois possuem representações
semelhantes na geometria. */
class Quadrado : public Retangulo
{
    public:
        Quadrado();
        Quadrado(const double, const double, const int, const int, const int, const double, const double);
        Quadrado(const Quadrado&);
        ~Quadrado();

        // operator overload
        Quadrado& operator=(const Quadrado&);
        friend ostream& operator<<(ostream&, Quadrado&);
        friend istream& operator>>(istream&, Quadrado&);

        // método imprime
        void imprime(void);
};

#endif // QUADRADO_H
