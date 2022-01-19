// Prueba1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "math.h"
using namespace std;

int main()
{
    int x, y;
    cout << "Hello World!\n";
    cout << "give me 2 integers: ";
    cin >> x >> y;
    cout << "sum: " << sum(x, y)<< endl;
    cout << "substraction: " << sub(x, y) << endl;
    cout << "mult: " << mult(x, y) << endl;
    cout << "div: " << divi(x, y) << endl;
}
