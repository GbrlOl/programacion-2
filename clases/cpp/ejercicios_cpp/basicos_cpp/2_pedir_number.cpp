/*
2. Pedir que ingrese un número del 1 al 10 al usuario y mostrarlo por pantalla.
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

    int n;

    // Solicito el número
    cout << "Ingresa un número entero del 1 al 10: ";
    cin >> n; // Guardo el número en n

    cout << "El número ingresado es: " << n << endl;
    getch();
    return 0;
}