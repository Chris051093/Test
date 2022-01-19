// Prueba1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

#include "math.h";
#include "text.h"
using namespace std;

int main()
{
    int x, y;
    cout << "Hello World!!\n";
    cout << "Give me two integers: " << endl;
    cin >> x >> y;
    cout << "addition: " << sum(x,y) << endl;
    cout << "substraction: " << subs(x, y) << endl;
    cout << "multiplication: " << mult(x, y) << endl;
    cout << "division: " << division(x, y) << endl;
}
