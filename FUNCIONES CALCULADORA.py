print("Funciones")

a = 10
b = 20

def suma(a, b):
    return a + b
def resta(a, b):
    return a - b
def multiplicacion(a, b):
    return a * b
def division(a, b):
    if b != 0:
        return a / b
    else:
        return "Error: División por cero"

print(f"La suma de {a} y {b} es: {suma(a, b)}")
print(f"La resta de {a} y {b} es: {resta(a, b)}")
print(f"La multiplicación de {a} y {b} es: {multiplicacion(a, b)}")
print(f"La división de {a} y {b} es: {division(a, b)}")
