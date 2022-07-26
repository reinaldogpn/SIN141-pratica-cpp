#include "retangulo.h"

Retangulo::Retangulo()
{
    x = y = largura = altura = 0;
    cor = espessuraContorno = tipoContorno = 0;
}

Retangulo::Retangulo(const double _x, const double _y, const int _cor, const int _espessuraContorno, const int _tipoContorno, const double _largura, const double _altura)
{
    x = _x;
    y = _y;
    cor = _cor;
    espessuraContorno = _espessuraContorno;
    tipoContorno = _tipoContorno;
    largura = _largura;
    altura = _altura;
}

Retangulo::Retangulo(const Retangulo& other)
{
    *this = other;
}

Retangulo::~Retangulo()
{
    //dtor
}

Retangulo& Retangulo::operator=(const Retangulo& other)
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

ostream& operator<<(ostream& os, Retangulo& obj)
{
    os << "x = " << obj.x << ", y = " << obj.y << endl;
    os << "cor = " << obj.cor << endl;
    os << "espessura do contorno = " << obj.espessuraContorno << endl;
    os << "tipo de contorno = " << obj.tipoContorno << endl;
    os << "largura = " << obj.largura << endl;
    os << "altura = " << obj.altura << endl;

    return os;
}

istream& operator>>(istream& is, Retangulo& obj)
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

void Retangulo::setLargura(double _largura)
{
    largura = _largura;
}

void Retangulo::setAltura(double _altura)
{
    altura = _altura;
}

double Retangulo::getLargura(void)
{
    return largura;
}

double Retangulo::getAltura(void)
{
    return altura;
}

void Retangulo::imprime(void)
{
    cout << endl;
    cout << "** Retângulo **" << endl;
    cout << *this;
}

double Retangulo::area(void)
{
    return (largura * altura);
}
