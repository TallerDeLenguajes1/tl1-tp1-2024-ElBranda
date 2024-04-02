#include <iostream>

using namespace std;

int main() {
    int *p, a;
    
    p=&a;
    
    cout << "Contenido del puntero: " << *p << endl;
    cout << "Direccion de memoria almacenada por el puntero: " << p << endl;
    cout << "Direccion de memoria de la variable: " << &a << endl;
    cout << "Direccion de memoria del puntero: " << &p << endl;
    cout << "Tamaño de memoria utilizada por la variable: " << sizeof(a) << endl;
    
    return 0;
}