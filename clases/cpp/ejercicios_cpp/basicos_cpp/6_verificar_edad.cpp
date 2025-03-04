/*
6. Escribe un programa que verifique si un usuario puede ver una película,
la película es para mayores e igual a 18, las personas arriba de 60 tienen descuento.
*/
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{

    int edad; // declarar la variable

    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad >= 60)
    {
        cout << "Es adulto mayor, tiene descuento para ver la película.";
    }
    else if (edad >= 18 && edad < 60) // Acá en c++ no funciona el 18 <= edad < 60
    {
        cout << "Es mayor de edad, puede ver la película.";
    }
    else
    {
        cout << "Usted es menor de edad.";
    }
    getch();
    return 0;
}