// Ejemplos de operadores en C++
#include <iostream>
#include <string>
using namespace std;


int main() {
    std::cout << "Hola, mundo!" << std::endl;
    return 0;


    std::cout << "Suma: " << (5 + 3) << std::endl;
    return 0;


}

// Ejemplos de operadores en C++
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declaración e inicialización de variables de diferentes tipos
    int edad = 25;
    float altura = 1.75f;
    double peso = 68.9;
    char inicial = 'J';
    bool esEstudiante = true;

    cout << "Edad (int): " << edad << endl;
    cout << "Altura (float): " << altura << endl;
    cout << "Peso (double): " << peso << endl;
    cout << "Inicial (char): " << inicial << endl;
    cout << "¿Es estudiante? (bool): " << (esEstudiante ? "true" : "false") << endl;

    return 0;
}


#include <iostream>

// Usar el espacio de nombres estándar para simplificar
using namespace std;

int main() {
    // 3. Operadores de Comparación
    cout << "--- Comparador de Números ---\n";

    // Declarar variables para los dos números
    int num1, num2;

    // Pedir los números al usuario
    cout << "Ingresa el primer número: ";
    cin >> num1;
    cout << "Ingresa el segundo número: ";
    cin >> num2;

    // Comparar los números y mostrar el resultado
    if (num1 > num2) {
        cout << num1 << " es mayor que " << num2 << endl;
    } else if (num1 < num2) {
        cout << num1 << " es menor que " << num2 << endl;
    } else {
        cout << num1 << " es igual a " << num2 << endl;
    }

    return 0;

}

#include <iostream>

// Usar el espacio de nombres estándar para simplificar
using namespace std;

int main() {
    // 4. Par o Impar
    cout << "--- Verificador de Par o Impar ---\n";

    // Declarar la variable para el número
    int numero;

    // Pedir el número al usuario
    cout << "Ingresa un número entero: ";
    cin >> numero;

    // Usar el operador módulo (%) para verificar si es par o impar
    if (numero % 2 == 0) {
        cout << "El número " << numero << " es par." << endl;
    } else {
        cout << "El número " << numero << " es impar." << endl;
    }

    return 0;
}

#include <iostream>

// Usar el espacio de nombres estándar para simplificar
using namespace std;

int main() {
    // 5. Tabla de Multiplicar
    cout << "--- Generador de Tabla de Multiplicar ---\n";

    // Declarar la variable para el número
    int numero;

    // Pedir el número al usuario
    cout << "Ingresa un número para ver su tabla de multiplicar: ";
    cin >> numero;

    // Usar un bucle for para mostrar la tabla del 1 al 10
    cout << "Tabla del " << numero << ":" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << numero << " x " << i << " = " << (numero * i) << endl;
    }

    return 0;
}

#include <iostream>

// Usar el espacio de nombres estándar para simplificar
using namespace std;

int main() {
    // 6. Suma de un Array
    cout << "--- Suma de los elementos de un Array ---\n";

    // Declarar e inicializar un array de enteros
    int numeros[] = {5, 10, 15, 20, 25};
    int suma = 0;

    // Calcular el número de elementos en el array
    int n = sizeof(numeros) / sizeof(numeros[0]);

    // Recorrer el array y sumar sus elementos
    for (int i = 0; i < n; ++i) {
        suma += numeros[i];
    }

    // Mostrar el resultado
    cout << "La suma de los elementos del array es: " << suma << endl;

    return 0;
}

#include <iostream>

// Usar el espacio de nombres estándar para simplificar
using namespace std;

int main() {
    // 8. Menú con switch
    cout << "--- Menú Interactivo ---\n";

    // Declarar la variable para la opción del usuario
    int opcion;

    // Mostrar las opciones del menú
    cout << "1. Mostrar un saludo\n";
    cout << "2. Mostrar un dato curioso\n";
    cout << "3. Salir\n";
    cout << "Por favor, elige una opción (1-3): ";
    
    // Leer la opción del usuario
    cin >> opcion;

    // Usar switch-case para manejar la opción
    switch (opcion) {
        case 1:
            cout << "¡Hola! Gracias por elegir la opción 1." << endl;
            break;
        case 2:
            cout << "Dato curioso: Los pulpos tienen tres corazones." << endl;
            break;
        case 3:
            cout << "Saliendo del programa. ¡Hasta luego!" << endl;
            break;
        default:
            cout << "Opción no válida. Por favor, ejecuta el programa de nuevo y elige una opción correcta." << endl;
            break;
    }

    return 0;
}

#include <iostream>
#include <vector>   // Necesario para usar std::vector (la lista dinámica)
#include <string>   // Necesario para usar std::string

// array nombres
using namespace std;

int main() {
    // 9. Llenar una lista (vector) desde un array
    cout << "--- Llenando una lista con nombres ---\n";

    // 1. Crear un array de strings con los nombres
    string nombres_array[] = {"Ana", "Carlos", "Beatriz", "David", "Elena"};

    // 2. Crear un vector (lista) de strings vacío
    vector<string> lista_nombres;

    cout << "Agregando nombres del array a la lista...\n";

    // 3. Recorrer el array y agregar cada nombre a la lista usando push_back
    // sizeof(nombres_array) / sizeof(string) calcula cuántos elementos hay en el array
    for (int i = 0; i < sizeof(nombres_array) / sizeof(string); ++i) {
        lista_nombres.push_back(nombres_array[i]);
    }

    // 4. Imprimir los elementos de la lista para verificar
    cout << "\nLa lista ahora contiene los siguientes nombres:\n";
    for (const string& nombre : lista_nombres) {
        cout << "- " << nombre << endl;
    }

    return 0;
}



#include <iostream>
#include <string>

// Definición de la clase Carro
class Carro {
public:
    std::string marca;
    std::string modelo;
    int anio;
    int velocidad;

    void acelerar(int aumento) {
        velocidad += aumento;
    }

    void frenar(int decremento) {
        velocidad -= decremento;
    }

    void mostrarInfo() {
        std::cout << "Marca: " << marca << ", Modelo: " << modelo << ", Año: " << anio << std::endl;
    }
};

int main() {
    // Crear un objeto de la clase Carro
    Carro miCorolla;

    // Asignar valores a sus atributos
    miCorolla.marca = "Chevrolet";
    miCorolla.modelo = "Silverado";
    miCorolla.anio = 2015;
    miCorolla.velocidad = 0;

    // Usar sus métodos
    miCorolla.mostrarInfo(); // Salida: Marca: Chevrolet, Modelo: Silverado, Año: 2015
    miCorolla.acelerar(60);
    std::cout << "Velocidad actual: " << miCorolla.velocidad << " km/h" << std::endl; // Salida: Velocidad actual: 60 km/h

    return 0;
}