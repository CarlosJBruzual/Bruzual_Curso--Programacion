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


