/*
8. Generar n elementos de la sucesión de Fibonacci, dado por el usuario.
*/
#include <iostream>
#include <conio.h>

using namespace std;

#include <iostream>
using namespace std;

int main()
{
    int n;
    int ex;
    cout << "Introduce el número de elementos de Fibonacci que deseas mostrar: ";
    cin >> n;

    int a = 0, b = 1; // Los primeros dos números de Fibonacci
    cout << "Sucesión de Fibonacci: ";

    for (int i = 0; i < n; ++i)
    {
        cout << a << " ";
        ex = a + b; // Calcula el siguiente número
        a = b;      // Mueve a a b
        b = ex;     // Mueve b al siguiente número
    }

    getch();
    return 0;
}
