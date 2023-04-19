#include "formabasica.h"

/** ctor padrão (nunca recebe argumentos) **/
FormaBasica::FormaBasica(void)
{
    x = y = 0;
    cor = espessuraContorno = tipoContorno = 0;
}

/** ctor normal (recebe argumentos) **/
FormaBasica::FormaBasica(const double _x, const double _y, const int _cor, const int _espessuraContorno, const int _tipoContorno)
{
    x = _x;
    y = _y;
    cor = _cor;
    espessuraContorno = _espessuraContorno;
    tipoContorno = _tipoContorno;
}

/** ctor de cópia (recebe a ref. de um objeto da classe como argumento) **/
FormaBasica::FormaBasica(const FormaBasica& other)
{
/** método SEM o operador de atribuição (=) ... */
//    x = other.x;
//    y = other.y;
//    cor = other.cor;
//    espessuraContorno = other.espessuraContorno;
//    tipoContorno = other.tipoContorno;

/** método COM o operador de atribuição (=) ... */
    *this = other;
}

/** destrutor da classe */
FormaBasica::~FormaBasica(void)
{
    //dtor
}

/** sobrecarga do operador de atribuição (=) especifica como a
atribuição deve se comportar ao atribuir um objeto a outro */
FormaBasica& FormaBasica::operator=(const FormaBasica& other)
{
    if(this == &other) // isso é necessário para evitar auto atribuição do objeto
        return *this;

    this->x = other.x;
    this->y = other.y;
    this->cor = other.cor;
    this->espessuraContorno = other.espessuraContorno;
    this->tipoContorno = other.tipoContorno;

    return *this;
}

/** note que os métodos "friend" devem ser declarados fora
do escopo da classe " FormaBasica:: " ... */
ostream& operator<<(ostream& os, FormaBasica& obj)
{
    os << "x = " << obj.x << ", y = " << obj.y << endl;
    os << "cor = " << obj.cor << endl;
    os << "espessura do contorno = " << obj.espessuraContorno << endl;
    os << "tipo de contorno = " << obj.tipoContorno << endl;

    return os;
}

istream& operator>>(istream& is, FormaBasica& obj)
{
    cout << "x: "; is >> obj.x;
    cout << "y: "; is >> obj.y;
    cout << "cor: "; is >> obj.cor;
    cout << "espessura do contorno: "; is >> obj.espessuraContorno;
    cout << "tipo de contorno: "; is >> obj.tipoContorno;

    return is;
}

/** métodos get/set */
void FormaBasica::setX(double _x)
{
    x = _x;
}

void FormaBasica::setY(double _y)
{
    y = _y;
}

void FormaBasica::setCor(int _cor)
{
    cor = _cor;
}

void FormaBasica::setEspessura(int _espessura)
{
    espessuraContorno = _espessura;
}

void FormaBasica::setContorno(int _contorno)
{
    tipoContorno = _contorno;
}

double FormaBasica::getX(void)
{
    return x;
}

double FormaBasica::getY(void)
{
    return y;
}

int FormaBasica::getCor(void)
{
    return cor;
}

int FormaBasica::getEspessura(void)
{
    return espessuraContorno;
}

int FormaBasica::getContorno(void)
{
    return tipoContorno;
}

/** método imprime - só é possível implementar dessa forma
graças à sobrecarga friend do operador (<<), do contrário, teríamos
que imprimir cada atributo (x, y, cor, etc.) do objeto separadamente, usando
os métodos "get", ou seja, assim é muito mais prático! */

//void FormaBasica::imprime(void)
//{
//    cout << endl;
//    cout << "** Figura Geométrica **" << endl;
//    cout << *this;
//}

/** após a classe ser declarada como abstrata, não é necessário
implementar o método "imprime" aqui. */
