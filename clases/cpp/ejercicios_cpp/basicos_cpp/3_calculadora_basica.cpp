/*
3. Calculadora básica: Pedir al usuario que ingrese dos parámetros y que muestre la suma, resta, multiplicación y división.
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    float a, b; // PAra sumar restar multiplicar dividir

    cout << "Ingrese el primer valor: ";
    cin >> a;
    cout << "Ingrese el segundo valor: ";
    cin >> b;

    cout << "La suma es: " << a + b << endl;
    cout << "La resta es: " << a - b << endl;
    cout << "La multiplicación es: " << a * b << endl;
    cout << "La división es: " << a / b << endl;
    getch();
    return 0;
}