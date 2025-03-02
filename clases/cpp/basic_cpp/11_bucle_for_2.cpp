// Puedo inicializar mi variable dentro del for

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

    //   inicializador, condición, incremento
    for (int i = 1; i <= 10; i++)
    {
        cout << i << endl;
    }

    getch();
    return 0;
}

/* Sintáxis

for(expresion_1; expresión_lógica; expresión_2){
    conjunto de instrucciones;
}

*/