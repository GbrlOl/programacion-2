#include <iostream>
#include <conio.h>

/* sintáxis

tipo_dato nombre_dato[tamaño_arreglo];

*/

using namespace std;

int main()
{
    // Nota: Cuando indicamos el tamaño es cuando no lo declaramos con los elementos que contendrá
    // Creo un array de tamaño 10 y tipo entero
    int array[10];

    // Creo un array de flotantes
    float array_2[10];

    // Creo un array de caracteres
    char letras[5];
    char mis_letras[] = {'a', 'B', 'H'};

    // Ahora estamos creando un array de n elementos
    int mi_array[] = {1, 5, 3, 4};

    cout << mi_array << endl;
    cout << "Accediendo al primer elemento: " << mi_array[0] << endl;
    cout << "Accediendo al último elemento: " << mi_array[3] << endl;
    cout << "\n";

    cout << "Accediendo al primer elemento de mi array de caracteres: " << mis_letras[0] << endl;
    cout << "Accediendo al último elemento de mi array de caracteres: " << mis_letras[2] << endl;

    getch();
    return 0;
}
