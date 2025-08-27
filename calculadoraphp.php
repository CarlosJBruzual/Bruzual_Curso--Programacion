<?php

// --- Definición de Funciones de la Calculadora ---

/**
 * Suma dos números.
 * @param float $a
 * @param float $b
 * @return float
 */
function sumar(float $a, float $b): float {
    return $a + $b;
}

/**
 * Resta dos números.
 * @param float $a
 * @param float $b
 * @return float
 */
function restar(float $a, float $b): float {
    return $a - $b;
}

/**
 * Multiplica dos números.
 * @param float $a
 * @param float $b
 * @return float
 */
function multiplicar(float $a, float $b): float {
    return $a * $b;
}

/**
 * Divide dos números, con validación para no dividir por cero.
 * @param float $a
 * @param float $b
 * @return float|string
 */
function dividir(float $a, float $b) {
    if ($b == 0) {
        return "Error: No se puede dividir por cero.";
    }
    return $a / $b;
}


// --- Bucle Principal de la Calculadora ---

while (true) {
    // Mostrar el menú de opciones
    echo "\n--- Calculadora PHP ---\n";
    echo "Seleccione la operación que desea realizar:\n";
    echo "1. Sumar\n";
    echo "2. Restar\n";
    echo "3. Multiplicar\n";
    echo "4. Dividir\n";
    echo "5. Salir\n";

    // Solicitar la opción al usuario
    $opcion = readline("Opción: ");

    // Si el usuario quiere salir, rompemos el bucle
    if ($opcion == '5') {
        echo "¡Hasta luego!\n";
        break;
    }

    // Validar que la opción sea correcta antes de pedir los números
    if (!in_array($opcion, ['1', '2', '3', '4'])) {
        echo "Opción no válida. Por favor, intente de nuevo.\n";
        continue; // Vuelve al inicio del bucle
    }

    // Solicitar los números al usuario
    $numero1 = (float)readline("Ingrese el primer número: ");
    $numero2 = (float)readline("Ingrese el segundo número: ");
    $resultado = 0;

    // Realizar la operación según la opción elegida
    switch ($opcion) {
        case '1':
            $resultado = sumar($numero1, $numero2);
            echo "Resultado: $numero1 + $numero2 = $resultado\n";
            break;
        case '2':
            $resultado = restar($numero1, $numero2);
            echo "Resultado: $numero1 - $numero2 = $resultado\n";
            break;
        case '3':
            $resultado = multiplicar($numero1, $numero2);
            echo "Resultado: $numero1 * $numero2 = $resultado\n";
            break;
        case '4':
            $resultado = dividir($numero1, $numero2);
            // Si el resultado es un texto (error), lo mostramos directamente
            if (is_string($resultado)) {
                echo $resultado . "\n";
            } else {
                echo "Resultado: $numero1 / $numero2 = $resultado\n";
            }
            break;
    }}