#Calculadora de Propinas

print("Calculadora de Propinas")
monto = float(input("Ingrese el monto de la cuenta: "))
porcentaje = 15
print("La propina es del 15%" )

propina = monto * (porcentaje / 100)
total = monto + propina

print(f"La propina es: {propina:.2f}")
print(f"El total a pagar es: {total:.2f}")
