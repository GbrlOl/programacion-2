#include <iostream>
#include <conio.h>

/*
Vamos a crear un arreglo del 1 al 10 y sumaremos su total

*/

using namespace std;

int main()
{
    int arreglo[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int suma = 0;

    for (int i = 1; i <= 10; i++)
    {
        suma = suma + arreglo[i - 1]; // ojo con el iterador, empezará a tomar del índice i=1, es decir del valor 2, entonces debemos restarle una unidad
    }
    cout << "La suma total del arreglo es: " << suma << endl;

    getch();
    return 0;
}
