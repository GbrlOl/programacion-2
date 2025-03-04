""" 
11. Crear un programa que convierta grados Celsius a Fahrenheit y viceversa. 
Debe preguntar al usuario qué tipo de conversión desea hacer.
"""

info = """ 
¿Que desea realizar?

1. Convertir de ºC a Fahrenheit.
2. Convertir de Fahrenheit a ºC.

Indique mediante un 1 o 2.
"""

print(info)
n = int(input("Ingrese qué desea realizar: "))

if n == 1:
    grados = float(input("Ingrese los grados Celsius: "))
    conv_f = grados * 1.8 + 32
    print(f"Los {grados} grados Celsius a Fahrenheit son: {conv_f}")

elif n == 2:
    grados = float(input("Ingrese los grados Fahrenheit: "))
    conv_f = (grados - 32) / 1.8
    print(f"Los {grados} grados Celsius a Fahrenheit son: {conv_f}")
else:
    print("\nIngresaste una opción no admitida")
