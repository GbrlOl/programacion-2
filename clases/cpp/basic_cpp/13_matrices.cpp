/* Sintáxis

tipo_dato nombre_dato[num_filas][num_columnas];

*/
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int matriz[2][3] = {1, 2, 3, 4, 5, 6};

    // Hay que tener ojo con los índices
    for (int i = 0; i <= 1; i++)
    {
        // cout << "El valor de i: " << i << endl;
        for (int j = 0; j <= 2; j++)
        {
            // cout << "El valor de j: " << j << endl;
            cout << "El valor es: " << matriz[i][j] << endl;
        }
    }

    getch();
    return 0;
}