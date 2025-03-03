""" 
9. Generar n elementos de la sucesión de Fibonacci, dado por el usuario.

Sucesión: 0, 1, 1, 2, 3, 5, 8, 13, 21, ... n
x[n-1] + x[n]
"""

n = int(input("¿Cuántos elementos quieres generar?: "))
# fib_number = [0, 1, 1, 2, 3]
fib_number = [0, 1, 1]

# Iniciamos el iterador desde 4 en adelante
for i in range(2, n):  # si n=1 -> i=0, si n=2 -> i=0,1
    suc = fib_number[i - 1] + fib_number[i]
    fib_number.append(suc)
    # print(fib_number)

if n == 1:
    print("El primer elemento de la sucesión es:", fib_number[0])

elif n == 2:
    print("Generando 2 elementos:", fib_number[:n])

else:
    print(f"Generando {n} elementos: {fib_number[:n]}")
