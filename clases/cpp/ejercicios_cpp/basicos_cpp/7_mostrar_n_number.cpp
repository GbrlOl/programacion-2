/*
7. Escribe un programa donde el usuario ingresa la cantidad de números a mostrar.
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

    int n;

    cout << "Ingrese la cantidad de numeros a mostrar: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "Elemento: " << i << endl;
    }

    getch();
    return 0;
}