#include <iostream>

using namespace std;

int main()
{
    int numero, dato = 5; // Vamos a pedir un numero al usuario y vamos a declarar dato=5

    cout << "Ingrese un número: ";
    cin >> numero; // Guardamos número ingresado en numero

    if (numero > dato)
    {
        cout << "El número ingresado es mayor a 5";
    }
    else
    {
        cout << "El numero es menor a 5";
    }

    return 0;
}

/* Sintaxius

if(condición){
    instruccion 1;
}
else{
    instrucciones 2;
}
*/