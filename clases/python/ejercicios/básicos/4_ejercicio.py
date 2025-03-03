""" 
4. Calculadora básica: Pedir al usuario que ingrese dos parámetros y que muestre la suma, resta, multiplicación y división.
"""

info = """ 
Ingresa 2 valores y te mostrará la suma, resta, multiplicación y división
""".strip()

print(info + "\n")

a = float(input("Ingresa el primer valor: "))
b = float(input("Ingresa el segundo valor: "))
print("\n")

print("La suma es: ", a + b)
print("La resta es: ", a - b)
print("La mutiplicación es: ", a * b)
print("La división es: ", a / b)
