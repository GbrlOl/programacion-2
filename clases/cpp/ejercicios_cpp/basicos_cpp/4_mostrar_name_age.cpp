/*
4. Escribe un programa que pregunte tu nombre y edad, y muestre cuántos años tendrás dentro de 10 años.
*/
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{

    string nombre;
    int edad;

    cout << "Ingresa tu nombre: ";
    cin >> nombre;
    cout << "Ingresa tu edad: ";
    cin >> edad;

    cout << nombre << ", tu edad en 10 años más será: " << edad + 10 << endl;

    getch();
    return 0;
}