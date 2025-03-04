""" 
12. Escribe un programa que cuente cuántas vocales (mayúsculas o minúsculas) contiene una cadena de texto ingresada por el usuario.
"""

palabra = str(input("Ingresa la palabra para contar la cantidad de vocales: "))

letras = []

for i in range(len(palabra)):
    if palabra[i] in ["a", "e", "i", "o", "u", "á"]:
        letras.append(i)

print(f"La cantidad de vocales que tiene {palabra} es: {len(letras)}")


# print(palabra[i])
