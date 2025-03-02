# C++

## Consola para C++ 

Para ejecutar código C++ instalé otra consola llamada `Easy Runner` ([link](https://marketplace.visualstudio.com/items?itemName=alor-pretatma.easy-runner)). 

Por otro lado, podemos ejecutar el código apretando ``ctrl + enter``.

**Nota**: Se instala directamente de VSCode de la sección extensiones.

# Librerías

## **conio.h**

Cuando ejecutamos nuestro archivo ``.cpp`` se genera un ejecutable, es decir, un `.exe`. Cuando abrimos el archivo este se cierra, para evitar aquello se puede utilizar la librería `conio.h`.

```c++
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    int i = 10;

    while(i > = 1){
        cout << i << endl;
        i--;
    }

    getch();
    return 0;

}
```