print("Carrito de compras")
carrito_compras = []
def mostrar_menu():
    print("Menú de opciones:")
    print("1 INGRESAR PRODUCTO")  
    print("2 MOTRAR EL CONTENIDO Y CALCULAR EL TOTAL")
    print("3 FINALIZAR LA COMPRA")
    print("4 ELIMINAR")

def agregar_producto(producto):
    carrito_compras.append(producto)
    print(f"Producto '{producto[0]}' agregado al carrito.")

def eliminar_producto(nombre_producto):
    for item in carrito_compras:
        if item[0].lower() == nombre_producto.lower():
            carrito_compras.remove(item)
            print(f"Producto '{nombre_producto}' eliminado del carrito.")
            return
    print(f"Producto '{nombre_producto}' no encontrado en el carrito.")
     
def calcular_total():
    total = sum(precio for _, precio in carrito_compras)
    print(f"El total de la compra es: ${total:.2f}")  
def mostrar_carrito():
    if not carrito_compras:
        print("El carrito está vacío.")
    else:
        print("Contenido del carrito de compras:")
        for i, (articulo, precio) in enumerate(carrito_compras, start=1):
            print(f"{i}. {articulo} - ${precio:.2f}")      

while True:
    mostrar_menu()
    opcion = input("Seleccione una opción (1-4): ")
    if opcion == '1':
        producto = input("Ingrese el nombre del producto: ")
        precio = float(input("Ingrese el precio del producto: "))
        agregar_producto((producto, precio))
   
    elif opcion == '2':
        print("Contenido y Total del carrito:")
        for i, (articulo, precio) in enumerate(carrito_compras, start=1):
            print(f"{i}. {articulo} - ${precio:.2f}")
            calcular_total()
    elif opcion == '3':
        print("Saliendo del carrito de compras. ¡Gracias por su compra!")
        mostrar_carrito()
        calcular_total()
        break
    elif opcion == '4':
        producto = input("Ingrese el nombre del producto a eliminar: ")
        eliminar_producto(producto)
        
    else:
        print("Opción no válida. Por favor, seleccione una opción del 1 al 5.")
