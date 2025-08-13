print("EMPECEMOS EL JUEGO")
print("Estas acampando en el bosque y escuchas un ruido extraño. que harias?")
print("1. Encerder la Linterna e investigar el ruido")
print("2. Ignorar el ruido y seguir durmiendo")
decision = input("Selecciona una opción (INVESTIGAR o IGNORAR): ")
print("Has seleccionado:", decision)
decision = decision.upper()
if decision.upper() == "INVESTIGAR":
    print("Encuentras un oso y decides correr.")
    print("1. Correr hacia el río")
    print("2. Correr hacia la cabaña")
    decision = input("Selecciona una opción (RÍO o CABANA): ")
    if decision.upper() == "RÍO":
        print("Al llegar al río, decides nadar o escapar a pie.")
        print("1. Nadar")
        print("2. Escapar a pie")
        decision = input("Selecciona una opción (NADAR o ESCAPAR): ")
        if decision.upper() == "NADAR":
            print("Nadas y llegas al otro lado del río.")
        elif decision.upper() == "ESCAPAR":
            print("Construyes una balsa y navegas por el río.")
        else:
            print("Decisión no válida, te quedas en la orilla.")

    elif decision.upper() == "CABAÑA":
        print("Encuentras refugio en la cabaña y el oso se va.")
    if decision.upper () == "CABAÑA":
            print("En la cabaña, encuentras una linterna y decides usarla.")
            print("1. Buscar comida en la cabaña")
            print("2. Salir de la cabaña")
            decision = input("Selecciona una opción (BUSCAR o SALIR): ")
            if decision.upper() == "BUSCAR":
                print("Encuentras comida y te sientes seguro.")
            elif decision.upper() == "SALIR":
                print("Sales de la cabaña y el oso ya no está.")
            else:
                print("Decisión no válida, te quedas en la cabaña.")   
    else:
        print("Decisión no válida, el oso te alcanza.")
   
         
elif decision.upper () == "IGNORAR":
    print("Sigues durmiendo y el ruido desaparece.")
    print("1. Despertar y explorar el campamento")
    print("2. Volver a dormir")
    decision = input("Selecciona una opción (EXPLORAR o DORMIR): ")
    if decision.upper () == "EXPLORAR":
        print("Encuentras un mapa del área y decides seguirlo.")

elif decision.upper ()== "EXPLORAR":
    print("Decides explorar el bosque y encuentras un sendero.")
    print("1. Seguir el sendero")
    print("2. Regresar al campamento")
    print("3. Buscar otra ruta en el sendero")
    decision.upper = input("Selecciona una opción (SEGUIR o REGRESAR): ")
    if decision.upper() == "SEGUIR":
        print("Descubres un lago hermoso y decides pescar.")
    elif decision.upper() == "REGRESAR":
        print("Regresas al campamento y te relajas junto al fuego.")
    elif decision.upper() == "BUSCAR":
        print("Encuentras un camino alternativo y te pierdes.")    
    else:
        print("Decisión no válida, te pierdes en el bosque.")


if decision.upper () == "DORMIR":
        print("Al despertar tienes hambre, decides abrir una lata de comida o ir a cazar.")
        print("1. Abrir una lata de comida")
        print("2. Ir a cazar")
        decision = input("Selecciona una opción (ABRIR UNA LATA DE COMIDA o IR A CAZAR): ")       

elif decision.upper () == "ABRIR UNA LATA DE COMIDA":
        print("Comes la comida y te sientes mejor.")
elif decision.upper () == "IR A CAZAR":
        print("Cazas un ciervo y tienes suficiente comida para varios días.")
else:
     print("Decisión no válida, te quedas sin comer.")






