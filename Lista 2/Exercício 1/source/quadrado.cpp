#include "quadrado.h"

Quadrado::Quadrado()
{
    x = y = largura = altura = 0;
    cor = espessuraContorno = tipoContorno = 0;
}

Quadrado::Quadrado(const double _x, const double _y, const int _cor, const int _espessuraContorno, const int _tipoContorno, const double _largura, const double _altura)
{
    x = _x;
    y = _y;
    cor = _cor;
    espessuraContorno = _espessuraContorno;
    tipoContorno = _tipoContorno;
    largura = _largura;
    altura = _altura;
}

Quadrado::Quadrado(const Quadrado& other)
{
    *this = other;
}

Quadrado::~Quadrado()
{
    //dtor
}

Quadrado& Quadrado::operator=(const Quadrado& other)
{
    if(this == &other)
        return *this;

    this->x = other.x;
    this->y = other.y;
    this->cor = other.cor;
    this->espessuraContorno = other.espessuraContorno;
    this->tipoContorno = other.tipoContorno;
    this->largura = other.largura;
    this->altura = other.altura;

    return *this;
}

ostream& operator<<(ostream& os, Quadrado& obj)
{
    os << "x = " << obj.x << ", y = " << obj.y << endl;
    os << "cor = " << obj.cor << endl;
    os << "espessura do contorno = " << obj.espessuraContorno << endl;
    os << "tipo de contorno = " << obj.tipoContorno << endl;
    os << "largura = " << obj.largura << endl;
    os << "altura = " << obj.altura << endl;

    return os;
}

istream& operator>>(istream& is, Quadrado& obj)
{
    cout << "x: "; is >> obj.x;
    cout << "y: "; is >> obj.y;
    cout << "cor: "; is >> obj.cor;
    cout << "espessura do contorno: "; is >> obj.espessuraContorno;
    cout << "tipo de contorno: "; is >> obj.tipoContorno;
    cout << "largura: "; is >> obj.largura;
    cout << "altura: "; is >> obj.altura;

    return is;
}

void Quadrado::imprime(void)
{
    cout << endl;
    cout << "** Quadrado **" << endl;
    cout << *this;
}
