""" 
10. Crear un programa que diga si el número ingresado es par o impar.

Se resuelve viendo el resto en una división
"""

n = int(input("Ingrese el número: "))

if n % 2 == 0:
    print(f"El número {n} es par")

else:
    print(f"El número {n} es impar")
