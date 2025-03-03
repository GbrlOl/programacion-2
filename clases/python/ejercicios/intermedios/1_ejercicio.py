""" 
Crea un programa que concatene dos cadenas y muestre el resultado en mayúsculas y minúsculas
"""


def a_mayusculas(cadena):
    mayusculas = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    resultado = ""
    for letra in cadena:
        if "a" <= letra <= "z":  # Si es una letra minúscula
            # Convertirla a mayúscula
            indice = ord(letra) - ord("a")  # Encontramos el índice de la letra
            resultado += mayusculas[
                indice
            ]  # Agregamos la letra correspondiente en mayúscula
        else:
            resultado += letra  # Si no es una letra, agregamos el carácter tal cual
    return resultado


def a_minusculas(cadena):
    minusculas = "abcdefghijklmnopqrstuvwxyz"
    resultado = ""
    for letra in cadena:
        if "A" <= letra <= "Z":  # Si es una letra mayúscula
            # Convertirla a minúscula
            indice = ord(letra) - ord("A")  # Encontramos el índice de la letra
            resultado += minusculas[
                indice
            ]  # Agregamos la letra correspondiente en minúscula
        else:
            resultado += letra  # Si no es una letra, agregamos el carácter tal cual
    return resultado


cadena1 = input("Ingresa la primera cadena: ")
cadena2 = input("Ingresa la segunda cadena: ")

cadena_concatenada = cadena1 + cadena2

print("Cadena concatenada en mayúsculas:", a_mayusculas(cadena_concatenada))
print("Cadena concatenada en minúsculas:", a_minusculas(cadena_concatenada))
