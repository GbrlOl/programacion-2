#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << "Ingresa un número del 1 al 10: "; // Solicitamos el número
    cin >> number;                             // Guardamos el número ingresado

    // El siguiente if está con una lógica mal diseñado, pero es para enseñar la sintaxis de varios if
    if (number != 5)
    {
        cout << "El número ingresado es distinto de 5";
    }
    else if (number == 5)
    {
        cout << "El número es igual a 5";
    }
    return 0;
}