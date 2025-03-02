// Función que suma dos números
#include <iostream>
#include <conio.h>

using namespace std;

// Prototipo
int sumar(int a, int b);

int main()
{
    int primer_valor, segundo_valor;

    cout << "Ingresa el primer valor: ";
    cin >> primer_valor;

    cout << "Ingresa el segundo valor: ";
    cin >> segundo_valor;

    cout << "La suma es: " << sumar(primer_valor, segundo_valor) << endl;

    getch(); // Esto permite que el ejecutable no se cierre.
    return 0;
}

int sumar(int a, int b)
{
    return a + b;
}