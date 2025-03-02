// Crear una calculadora utilizando switch que pueda sumar, restar, multiplicar y dividir.
#include <iostream>
#include <conio.h>
#include <string> // Para importar string y declarar un string
#include <locale> // Para interpretar los caracteres especiales aunque no funcionó :c

using namespace std;

int suma(int a, int b);
int resta(int a, int b);
int mul(int a, int b);
float div(float a, float b);

int main()
{
    setlocale(LC_ALL, "");
    int a, b, num;
    float param1, param2;
    // Método 1 para mostrar info
    // string info = R"(
    // # Calculadora básica

    // 1. Permite sumar.
    // 2. Permite restar.
    // 3. Permite multiplicar.
    // 4. Permite dividir.
    // )";

    // Método 2 para mostrar info
    // string info = "Calculadora Básica\n\n"
    //               "1. Sumar.\n"
    //               "2. Restar.\n"
    //               "3. Multiplicar.\n"
    //               "4. Dividir.\n";
    wstring info = L"Calculadora Básica\n\n"
                   "1. Sumar.\n"
                   "2. Restar.\n"
                   "3. Multiplicar.\n"
                   "4. Dividir.\n";

    wcout << info << endl;
    cout << "¿Que operacion desea realizar? (Ingrese numero)";
    cout << "\n";
    cin >> num;

    switch (num)
    {
    case 1:
        cout << "Ingrese el primer valor: ";
        cin >> a;
        cout << "Ingrese el segundo valor: ";
        cin >> b;

        cout << "La suma es: " << suma(a, b) << endl;
        break;

    case 2:
        cout << "Ingrese el primer valor: ";
        cin >> a;
        cout << "Ingrese el segundo valor: ";
        cin >> b;

        cout << "La resta es: " << resta(a, b) << endl;
        break;

    case 3:
        cout << "Ingrese el primer valor: ";
        cin >> a;
        cout << "Ingrese el segundo valor: ";
        cin >> b;

        cout << "La multiplicacion es: " << mul(a, b) << endl;
        break;

    case 4:
        cout << "Ingrese el primer valor: ";
        cin >> param1;
        cout << "Ingrese el segundo valor: ";
        cin >> param2;

        // cout << "La division es: " << div(param1, param2) << endl;
        cout << "La division es: " << div(static_cast<float>(param1), static_cast<float>(param2)) << endl;
        break;

    default:
        cout << "Ingresaste un numero no admitido";
        break;
    }

    return 0;
}

int suma(int a, int b)
{
    return a + b;
}

int resta(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

float div(float a, float b)
{
    return a / b;
}