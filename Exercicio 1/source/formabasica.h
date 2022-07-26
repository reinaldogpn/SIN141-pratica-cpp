#ifndef FORMABASICA_H
#define FORMABASICA_H

#include <iostream>

using namespace std;

class FormaBasica
{
    public:
        FormaBasica();
        FormaBasica(const double, const double, const int, const int, const int);
        FormaBasica(const FormaBasica&);
        virtual ~FormaBasica();

        //  operator overload
        FormaBasica& operator=(const FormaBasica&);
        friend ostream& operator<<(ostream&, FormaBasica&);
        friend istream& operator>>(istream&, FormaBasica&);

        // métodos set
        void setX(double);
        void setY(double);
        void setCor(int);
        void setEspessura(int);
        void setContorno(int);

        // métodos get
        double getX(void);
        double getY(void);
        int getCor(void);
        int getEspessura(void);
        int getContorno(void);

        // métodos virtuais puros
        virtual void imprime(void)=0; /** isso ("virtual" e " =0 ") define essa classe como abstrata */
        virtual double area(void)=0;

    /** os atributos da classe base devem ser declarados "protected" (e não "private")
    para que seja possível o relacionamento de herança com classes derivadas. */
    protected:
        double x; double y;
        int cor;
        int espessuraContorno;
        int tipoContorno;
};

#endif // FORMABASICA_H
