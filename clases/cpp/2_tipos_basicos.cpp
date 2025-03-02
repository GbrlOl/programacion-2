/*
En esta clase se enseña a utilziar los tipos básicos de datos en C++

*/

// Importar libreria input outpu
#include <iostream>
#include <string> //Para el tipo de dato string debemos importarlo

using namespace std; // El utilizar esto evitamos usar esto:
/*
std::cout << "Valor de tipo entero: " << valor << std::endl;
*/

int main()
{
    // Tipo entero
    int mi_entero = 5;
    cout << "Valor de tipo entero: " << mi_entero << endl; // Mostramos por pantalla

    // Tipo flotante
    float mi_flotante = 5.5;
    cout << "Valor de tipo flotante: " << mi_flotante << endl;

    // Tipo double, la diferencia entre el flotante es que puedo guardar datos más largos
    double mi_doble = 3.14159;
    cout << "Valor de tipo double: " << mi_doble << endl;

    // Tipo de dato caracter
    char mi_caracter = 'A'; // Para crear un tipo de dato caracter debo utilizar comilla simple
    cout << "Valode del caracter: " << mi_caracter << endl;

    // Tipo string
    string saludo = "Hola mundo!!";
    cout << "El valor del string es: " << saludo << endl;

    return 0;
}