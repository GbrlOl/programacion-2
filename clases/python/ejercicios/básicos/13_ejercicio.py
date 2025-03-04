""" 
13. Pide al usuario un número y muestra la tabla de multiplicar de ese número hasta el 10.
"""

n = int(input("Ingrese la tabla de multiplicar que desea: "))

for i in range(0, 13):
    print(f"{n}x{i} = {n*i}")
