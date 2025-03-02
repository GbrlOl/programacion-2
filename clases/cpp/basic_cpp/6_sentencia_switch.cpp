#include <iostream>

using namespace std;

int main()
{
    int number = 5;

    cout << "Digite un numero de 1 al 5: "; // No le pondré tilde a número para que se visualice bien
    cin >> number;

    switch (number)
    {
    case 1:
        cout << "El numero ingresado es 1";
        break;

    case 2:
        cout << "El numero ingresado es 2";
        break;

    case 3:
        cout << "El numero ingresado es 3";
        break;

    case 4:
        cout << "El numero ingresado es 4";
        break;

    case 5:
        cout << "El numero ingresado es 5";
        break;

    // En caso de que no ingrese ningún número podemos utilizar un default
    default:
        cout << "Ingresaste un numero no admitido";
        break;
    }

    return 0;
}

/* Sintáxis
switch(expresión){
    case Literal1:
        conjunto de instrucciones 1;
        break;
    case Literal2:
        conjunto de instrucciones 1;
        break;
    case Literal_n:
        conjunto de instrucciones 1;
        break;
    default:
        conjunto instrucciones por defecto;
        break;
}

*/
