#include "formabasica.h"
#include "circulo.h"
#include "retangulo.h"
#include "triangulo.h"
#include "quadrado.h"

int main(void)
{
    // Círculos
    Circulo C1(4.0, 9.0, 66, 2, 2, 3.5); // obj criado usando construtor normal;
    FormaBasica *ptrC1 = &C1;

    Circulo C2; // obj criado usando construtor padrão;
    cout << "Criando novo círculo..." << endl;
    cin >> C2; /** isso só é possível graças à sobrecarga friend do operador (>>), do contrário,
    teríamos que definir os atributos de f1 um por um (x, y, cor, etc.) , usando métodos "set"... */

    FormaBasica *ptrC2 = &C2;

    cout << endl;
    cout << "Imprimindo círculos..." << endl;
    cout << endl;

    cout << "Círculo 1:" << endl;
    ptrC1->imprime();
    cout << endl;
    cout << "Área do círculo 1: " << ptrC1->area() << endl;

    cout << "Círculo 2:" << endl;
    ptrC2->imprime();
    cout << endl;
    cout << "Área do círculo 2: " << ptrC2->area() << endl;

    Circulo C3(C2);
    FormaBasica *ptrC3 = &C3; // obj criado usando construtor de cópia;

    cout << "Círculo 3 (Cópia do Círculo 2):" << endl;
    ptrC3->imprime();
    cout << endl;
    cout << "Área do círculo 3: " << ptrC3->area() << endl;

    // Retângulos

    Retangulo R1(6.0, 11.0, 77, 5, 2, 5.0, 5.0);
    FormaBasica *ptrR1 = &R1;

    Retangulo R2;
    cout << endl;
    cout << "Criando novo retângulo..." << endl;
    cin >> R2;
    FormaBasica *ptrR2 = &R2;

    cout << endl;
    cout << "Imprimindo retângulos..." << endl;
    cout << endl;

    cout << "Retângulo 1:" << endl;
    ptrR1->imprime();
    cout << endl;
    cout << "Área do retângulo 1: " << ptrR1->area() << endl;

    cout << "Retângulo 2:" << endl;
    ptrR2->imprime();
    cout << endl;
    cout << "Área do retângulo 2: " << ptrR2->area() << endl;

    Retangulo R3(R2);
    FormaBasica *ptrR3 = &R3;

    cout << "Retângulo 3 (Cópia do Retângulo 2):" << endl;
    ptrR3->imprime();
    cout << endl;
    cout << "Área do retângulo 3: " << ptrR3->area() << endl;

    // Triângulos

    Triangulo T1(8.0, 13.0, 88, 5, 2, 5.0, 5.0);
    FormaBasica *ptrT1 = &T1;

    Triangulo T2;
    cout << endl;
    cout << "Criando novo triângulo..." << endl;
    cin >> T2;
    FormaBasica *ptrT2 = &T2;

    cout << endl;
    cout << "Imprimindo triângulos..." << endl;
    cout << endl;

    cout << "Retângulo 1:" << endl;
    ptrT1->imprime();
    cout << endl;
    cout << "Área do triângulo 1: " << ptrT1->area() << endl;

    cout << "Retângulo 2:" << endl;
    ptrT2->imprime();
    cout << endl;
    cout << "Área do triângulo 2: " << ptrT2->area() << endl;

    Triangulo T3(T2);
    FormaBasica *ptrT3 = &T3;

    cout << "Triângulo 3 (Cópia do Triângulo 2):" << endl;
    ptrT3->imprime();
    cout << endl;
    cout << "Área do triângulo 3: " << ptrT3->area() << endl;

    // Quadrados

    Quadrado Q1(10.0, 15.0, 99, 5, 2, 5.0, 5.0);
    FormaBasica *ptrQ1 = &Q1;

    Quadrado Q2;
    cout << endl;
    cout << "Criando novo quadrado..." << endl;
    cin >> Q2;
    FormaBasica *ptrQ2 = &Q2;

    cout << endl;
    cout << "Imprimindo quadrados..." << endl;
    cout << endl;

    cout << "Quadrado 1:" << endl;
    ptrQ1->imprime();
    cout << endl;
    cout << "Área do quadrado 1: " << ptrQ1->area() << endl;

    cout << "Quadrado 2:" << endl;
    ptrQ2->imprime();
    cout << endl;
    cout << "Área do quadrado 2: " << ptrQ2->area() << endl;

    Retangulo Q3(Q2);
    FormaBasica *ptrQ3 = &Q3;

    cout << "Quadrado 3 (Cópia do Quadrado 2):" << endl;
    ptrQ3->imprime();
    cout << endl;
    cout << "Área do quadrado 3: " << ptrQ3->area() << endl;

    return 0;
}
