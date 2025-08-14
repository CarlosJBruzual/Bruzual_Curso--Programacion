print("Carrito de compras")
carrito_compras = []
def mostrar_menu():
    print("Menú de opciones:")
    print("1 INGRESAR PRODUCTO")  
    print("2 ELIMINAR")
    print("3 CALCULAR EL TOTAL")
    print("4 SALIR DEL CARRITO")
    

def agregar_producto(producto):
    carrito_compras.append(producto)
    print(f"Producto '{producto}' agregado al carrito.")




def eliminar_producto(producto):
    if producto in carrito_compras:
        carrito_compras.remove(producto)
        print(f"Producto '{producto}' eliminado del carrito.")
    else:
        print(f"Producto '{producto}' no encontrado en el carrito.")



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
        producto = input("Ingrese el nombre del producto a eliminar: ")
        eliminar_producto(producto)
    elif opcion == '3':
        print("Contenido y Total del carrito:")
        for i, (articulo, precio) in enumerate(carrito_compras, start=1):
            print(f"{i}. {articulo} - ${precio:.2f}")
            calcular_total()
    elif opcion == '4':
        print("Saliendo del carrito de compras. ¡Gracias por su compra!")
        mostrar_carrito()
        calcular_total()
        break
    else:
        print("Opción no válida. Por favor, seleccione una opción del 1 al 5.")

    

#opcion2 = input("Ingrese el nombre del producto a eliminar: ")
#if opcion2 in carrito_compras:
 #   carrito_compras.remove(opcion2)
#opcion3 = input("Calcular el Total de la compra: ")
#print("Contenido del carrito de compras:")
#for i, articulo in enumerate(lista_compras, start=1):
#    print(f"{i}. {articulo}")








#AGREGAR un nuevo elemento ➕
#🔹 MOSTRAR el contenido de la cesta de la compra 🧺
#🔹 ELIMINAR un elemento ❌
#🔹 CALCULAR el total de la compra 💰
#🔹 RENUNCIAR 👋 para salir del programa
