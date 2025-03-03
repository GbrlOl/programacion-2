""" 
2. Crear un programa que permita realizar una lista tarea, donde permita agregar y eliminar tarea. 
Cada vez que se agrega o elimina una tarea se debe mostrar todas las tareas actuales.

Nota: Este ejercicio toma tiempo hacerlo
"""

user = True
lista = []


while user:

    user = str(input("Desea agregar (a) o eliminar (e) una tarea (exit para salir): "))

    if user == "exit":
        break

    if user == "a":
        agregar = str(input("\nIngresa la tarea que quieres agregar: "))
        # lista
        lista.append(agregar)
        # print("\n")
        # for i in range(len(lista)):
        #     print(f"{i+1}. Tarea por realizar: {lista[i]}")
        # print("\n")
    elif user == "e":
        print("\n")
        eliminar = int(input("Ingresa el número de la tarea que desea eliminar: "))
        del lista[eliminar - 1]

    print("\n")
    for i in range(len(lista)):
        print(f"{i+1}. Tarea por realizar: {lista[i]}")
    print("\n")
