print("Descuento en Tienda")
precio = float(input("Ingrese el precio del producto: "))
descuento1 = 0.10
descuento2 = 0.20
if precio <= 50 or precio <= 200:
    descuento = precio * descuento1
    precio_final = precio - descuento
    print(f"Descuento aplicado: {descuento1 * 100}%")
    print(f"Precio final después del descuento: {precio_final:.2f}")
else: precio >= 200
descuento = precio * descuento2
precio_final = precio - descuento
print(f"Descuento aplicado: {descuento2 * 100}%")
print(f"Precio final después del descuento: {precio_final:.2f}")