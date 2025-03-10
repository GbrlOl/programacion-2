def sumar(a: float, b: float) -> float:
    return a + b


def restar(a: float, b: float) -> float:
    return a - b


# 1. Este es lo primero que debes ejecutar del código, lo comentas y luego descomentas el 2

print("Esta es una calculadora simple\n")

# Esto lo debes comentar luego cuando descomentas el if
# param1 = float(input("Ingresa el primer número: "))
# param2 = float(input("Ingresa el segundo número: "))

# print(f"La suma es: {sumar(param1, param2)}")
# print(f"La resta es: {restar(param1, param2)}")

# 2. Esto lo descomentas para que funcione el archivo .py
print(__name__)

if __name__ == "__main__":
    print(__name__)

    param1 = float(input("Ingresa el primer número: "))
    param2 = float(input("Ingresa el segundo número: "))

    print(f"La suma es: {sumar(param1, param2)}")
    print(f"La resta es: {restar(param1, param2)}")
