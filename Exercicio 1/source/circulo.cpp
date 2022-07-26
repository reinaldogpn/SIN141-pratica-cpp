#include "circulo.h"

#define PI 3.1415

Circulo::Circulo()
{
    x = y = raio = 0;
    cor = espessuraContorno = tipoContorno = 0;
}

Circulo::Circulo(const double _x, const double _y, const int _cor, const int _espessuraContorno, const int _tipoContorno, const double _raio)
{
    x = _x;
    y = _y;
    cor = _cor;
    espessuraContorno = _espessuraContorno;
    tipoContorno = _tipoContorno;
    raio = _raio;
}

Circulo::Circulo(const Circulo& other)
{
    *this = other;
}

Circulo::~Circulo()
{
    //dtor
}

Circulo& Circulo::operator=(const Circulo& other)
{
    if(this == &other)
        return *this;

    this->x = other.x;
    this->y = other.y;
    this->cor = other.cor;
    this->espessuraContorno = other.espessuraContorno;
    this->tipoContorno = other.tipoContorno;
    this->raio = other.raio;

    return *this;
}

ostream& operator<<(ostream& os, Circulo& obj)
{
    os << "x = " << obj.x << ", y = " << obj.y << endl;
    os << "cor = " << obj.cor << endl;
    os << "espessura do contorno = " << obj.espessuraContorno << endl;
    os << "tipo de contorno = " << obj.tipoContorno << endl;
    os << "raio = " << obj.raio << endl;

    return os;
}

istream& operator>>(istream& is, Circulo& obj)
{
    cout << "x: "; is >> obj.x;
    cout << "y: "; is >> obj.y;
    cout << "cor: "; is >> obj.cor;
    cout << "espessura do contorno: "; is >> obj.espessuraContorno;
    cout << "tipo de contorno: "; is >> obj.tipoContorno;
    cout << "raio: "; is >> obj.raio;

    return is;
}

void Circulo::setRaio(double _raio)
{
    raio = _raio;
}

double Circulo::getRaio(void)
{
    return raio;
}

void Circulo::imprime(void)
{
    cout << endl;
    cout << "** Círculo **" << endl;
    cout << *this;
}

double Circulo::area(void)
{
    return (PI * pow(raio, 2));
}
