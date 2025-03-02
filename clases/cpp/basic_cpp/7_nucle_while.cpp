#include <iostream>

using namespace std;

// Imprimir 100 numeros
int main()
{
    int contador = 0;

    while (contador < 100)
    {
        contador += 1; // contador = contador + 1
        // contador++;
        cout << "Contador: " << contador << endl;
    }
    return 0;
}

/* Sintáxis
while (expresión logica){
    conjunto de instrucciones;
}

*/