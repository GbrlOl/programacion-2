#include <iostream>
#include <stdlib.h>

using namespace std;

// Vamos a realizar un incrementador
int main()
{
    int i = 1;
    do
    {
        cout << i << endl;
        i++;
        // cout << i << endl;
    } while (i <= 100);

    system("pause");
    return 0;
}