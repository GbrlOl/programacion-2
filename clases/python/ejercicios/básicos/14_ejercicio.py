""" 
14. Escribe un programa que verifique si un número ingresado por el usuario es primo o no.
"""

n = int(input("Ingresa el número: "))

if (n % 1 == 0) & (n % n == 0):
    print("El número ingresado es un número primo")
else:
    print("El número ingresado no es primo")
