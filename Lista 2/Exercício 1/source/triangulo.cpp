#include "triangulo.h"

Triangulo::Triangulo()
{
    x = y = base = altura = 0;
    cor = espessuraContorno = tipoContorno = 0;
}

Triangulo::Triangulo(const double _x, const double _y, const int _cor, const int _espessuraContorno, const int _tipoContorno, const double _base, const double _altura)
{
    x = _x;
    y = _y;
    cor = _cor;
    espessuraContorno = _espessuraContorno;
    tipoContorno = _tipoContorno;
    base = _base;
    altura = _altura;
}

Triangulo::Triangulo(const Triangulo& other)
{
    *this = other;
}

Triangulo::~Triangulo()
{
    //dtor
}

Triangulo& Triangulo::operator=(const Triangulo& other)
{
    if(this == &other)
        return *this;

    this->x = other.x;
    this->y = other.y;
    this->cor = other.cor;
    this->espessuraContorno = other.espessuraContorno;
    this->tipoContorno = other.tipoContorno;
    this->base = other.base;
    this->altura = other.altura;

    return *this;
}

ostream& operator<<(ostream& os, Triangulo& obj)
{
    os << "x = " << obj.x << ", y = " << obj.y << endl;
    os << "cor = " << obj.cor << endl;
    os << "espessura do contorno = " << obj.espessuraContorno << endl;
    os << "tipo de contorno = " << obj.tipoContorno << endl;
    os << "base = " << obj.base << endl;
    os << "altura = " << obj.altura << endl;

    return os;
}

istream& operator>>(istream& is, Triangulo& obj)
{
    cout << "x: "; is >> obj.x;
    cout << "y: "; is >> obj.y;
    cout << "cor: "; is >> obj.cor;
    cout << "espessura do contorno: "; is >> obj.espessuraContorno;
    cout << "tipo de contorno: "; is >> obj.tipoContorno;
    cout << "base: "; is >> obj.base;
    cout << "altura: "; is >> obj.altura;

    return is;
}

void Triangulo::setBase(double _base)
{
    base = _base;
}

void Triangulo::setAltura(double _altura)
{
    altura = _altura;
}

double Triangulo::getBase(void)
{
    return base;
}

double Triangulo::getAltura(void)
{
    return altura;
}

void Triangulo::imprime(void)
{
    cout << endl;
    cout << "** Triangulo **" << endl;
    cout << *this;
}

double Triangulo::area(void)
{
    return (base * altura) / 2;
}
