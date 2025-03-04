/*
5. Desarrolla un programa que pida el ancho y alto de un rectángulo, y muestre su área.
*/
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{

    float ancho, alto; // Declaro mis variables

    // Ahora debo solicitar los datos
    cout << "Ingresa el ancho: ";
    cin >> ancho;

    cout << "Ingresa el alto: ";
    cin >> alto;

    // Ahora debo mostrar el área
    cout << "El área del rectángulo es: " << ancho * alto << endl;

    getch();
    return 0;
}