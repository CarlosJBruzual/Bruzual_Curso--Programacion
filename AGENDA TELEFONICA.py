print("Agenda Telefónica")

agenda = {
    "Ana"
    : "123-456-7890",
    "Luis": "987-654-3210",
    "Carlos": "555-555-5555"
}

nombre = input("INgrese el nombre del contacto que busca: ")
if nombre in agenda:
    print(f"El número de {nombre} es: {agenda[nombre]}")
else:
    print(f"Contacto no encontrado.")

