print("Verificador de Mayoría de Edad")
anio = int(input("Ingrese su año de nacimiento: "))
anio_actual = 2025
edad = anio_actual - anio

es_mayor = edad >= 18
if es_mayor:
    print("Eres mayor de edad.")
else:
    print("Eres menor de edad.")
print(f"Tu edad es: {edad} años")

