""" 
Escribe un programa que verifique si un usuario puede ver una película, la película es para mayores e igual a 18, las personas arriba de 60 tienen descuento.
"""

edad = int(input("Ingresa tu edad: "))

if 18 <= edad < 60:
    print("Eres adulto, puedes ver la película")
elif edad >= 60:
    print("Tienes un descuento por ser adulto mayor")
else:
    print("Eres menor de edad, no puedes ver la película")
