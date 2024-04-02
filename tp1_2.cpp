#include <iostream>

using namespace std;

int CuadradoInt(int a) {
    return a*a;    
}

void CuadradoVoid(int &a) {
    a = a*a;
}

void Invertir(int &a, int &b) {
    int k=a;
    a=b;
    b=k;
}

void Orden(int &a, int &b) {
    if (a > b) Invertir(a, b);
}

int main() {
    int a=2, b=10;
    
    Invertir(a, b);
    
    cout << "Dirección de A: " << &a << " | " << "Valor de A: " << a << endl << "Dirección de B: " << &b << " | " << "Valor de B: " << b << endl;
    
    Orden(a, b);
    
    cout << "Dirección de A: " << &a << " | " << "Valor de A: " << a << endl << "Dirección de B: " << &b << " | " << "Valor de B: " << b << endl;
    
    return 0;
}