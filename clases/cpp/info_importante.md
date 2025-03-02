# C++

## Funciones en C++

Las funciones en C++ son bloques de código reutilizables que realizan tareas específicas. Son fundamentales para estructurar y modularizar tu programa. Una función básica en C++ se define con la siguiente estructura:

```c++
tipo_dato_retorno nombre_funcion(tipo_dato_1 nombre_dato_1, tipo_dato_2 nombre_dato_2, tipo_dato_n nombre_dato_n) {
    // Cuerpo de la función: instrucciones a ejecutar
    return valor; // (opcional, dependiendo del tipo de retorno)
}
```

Dentro de un código en C++ debe seguir cierta estructura las funciones:

1. Debo declarar la función (Denominado como prototipo).
2. Luego viene el main.
3. Debajo del main creo mi función.

```c++
// Función que suma dos números
#include <iostream>
#include <conio.h>

using namespace std;

// Prototipo
int sumar(int a, int b);

int main()
{
    int primer_valor, segundo_valor;

    cout << "Ingresa el primer valor: ";
    cin >> primer_valor;

    cout << "Ingresa el segundo valor: ";
    cin >> segundo_valor;

    cout << "La suma es: " << sumar(primer_valor, segundo_valor) << endl;

    getch(); // Esto permite que el ejecutable no se cierre.
    return 0;
}

int sumar(int a, int b)
{
    return a + b;
}
```


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

## **stdlib.h**

Esta librería similar a la anterior, se debe utilizar la siguiente función.

```c++
#include <iostream>
#include <stdlib.h>

using namespace std;

// Vamos a realizar un incrementador
int main()
{
    int i = 1;
    do
    {
        i++;
        cout << i << endl;
    } while (i <= 100);

    system("pause");
    return 0;
}
```


# Recursos de estudio

A continuación, dejo información de la cual obtuve todo el contenido para crear la sección de C++.

## YouTube

