#include <iostream>

using namespace std;

// Vamos a realizar un incrementador
int main()
{
    int i = 1;
    do
    {
        i++;
        cout << i << endl;
    } while (i <= 100);

    return 0;
}

/* Sintáxis

do{
    conjunto instrucciones;
} while(expresión lógica);

Nota: Este bucle actúa y luego piensa, es decir al menos una vez se ejecutará las instrucciones y luego verificará la condición

*/

/*
¿Por qué muestra desde el 2 en adelante?
*/