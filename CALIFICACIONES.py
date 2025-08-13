print("Calificaciones")
calificaciones = [18, 20, 15, 17, 19]
suma = 0
for nota in calificaciones:
    print(f"Calificación: {nota}")
    suma += nota


promedio = suma / len(calificaciones)
nota_maxima = max(calificaciones)
nota_minima = min(calificaciones)
print(f"Calificaciones: {calificaciones}")
print(f"Promedio: {promedio}")
print(f"Nota mas alta: {nota_maxima}")
print(f"Nota mas baja: {nota_minima}")

