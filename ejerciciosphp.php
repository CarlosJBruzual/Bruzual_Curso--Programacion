<?php


$pares = 0;
$impares = 0;

for ($i = 1; $i <= 50; $i++) {
    if ($i % 2 == 0) {
        $pares++;
    } else {
        $impares++;
    }
}
echo "Cantidad de números pares entre 1 y 50: $pares";
echo "Cantidad de números impares entre 1 y 50: $impares";


echo "## 1. Ejemplo de bucle for (Tabla del 8) ##\n";

// Este bucle se ejecutará 10 veces.
// 1. Inicialización: $i = 1 (el contador empieza en 1)
// 2. Condición: $i <= 10 (el bucle continúa mientras $i sea menor o igual a 10)
// 3. Incremento: $i++ (en cada vuelta, se suma 1 a $i)
for ($i = 1; $i <= 10; $i++) {
    echo "8 x " . $i . " = " . (8 * $i) . "\n";
}
echo "\n";

echo "Consigue el numero secreto";

$numero = 14;
$intentos = 0;
$encontrado = false;

while (!$encontrado) {
    $intentos++;
    $respuesta = (int)readline("Intento $intentos: Adivina el número secreto (entre 1 y 20): ");

    if ($respuesta === $numero) {
        $encontrado = true;
        echo "¡Felicidades! Adivinaste el número secreto en $intentos intentos.\n";
    } elseif ($respuesta < $numero) {
        echo "Demasiado bajo. Intenta de nuevo.\n";
    } else {
        echo "Demasiado alto. Intenta de nuevo.\n";
    }
}   


  

// Verificación para Licencia de Conducir
echo "\n## Verificación para Licencia de Conducir ##\n";
$edad = (int)readline("Por favor, ingresa tu edad: ");

if ($edad >= 18 && $edad <= 65) {
    echo "Con $edad años, cumples los requisitos para obtener la licencia de conducir.\n";
} else {
    echo "Con $edad años, no cumples los requisitos para obtener la licencia de conducir.\n";
}



// Aquí definimos nuestra herramienta, pero todavía no la usamos.
function mostrarSaludo($numero1, $numero2) {
    echo "¡Hola! Bienvenido a mi sitio web desde Maracaibo.\n";
    $suma = 5 + 6;
    $division = 5 / 6;
    $multiplicacion = 5 * 6;
    $resta = 5 - 6;
    echo "La suma de 5 + 6 es: $suma\n";
    echo "La división de 5 / 6 es: $division\n";
    echo "La multiplicación de 5 * 6 es: $multiplicacion\n";
    echo "La resta de 5 - 6 es: $resta\n";
    $sumaconvariables = $numero1 + $numero2;
    echo "La suma de las variables es: $sumaconvariables\n";
    $divisionconvariables = $numero1 / $numero2;
    echo "La división de las variables es: $divisionconvariables\n";
    $multiplicacionconvariables = $numero1 * $numero2;
    echo "La multiplicación de las variables es: $multiplicacionconvariables\n";
    $restaconvariables = $numero1 - $numero2;
    echo "La resta de las variables es: $restaconvariables\n";
}

// Ahora, usamos la herramienta llamándola por su nombre.
// Esto ejecuta el código que está dentro de la función.
mostrarSaludo(10, 100); 



// 7️⃣ Clasificación de un Número

echo "## Clasificación de un Número ##\n";

// Solicitar un número al usuario
$numero = (float)readline("Ingresa un número para clasificarlo: ");

// Determinar si es positivo, negativo o cero
if ($numero > 0) {
    echo "El número $numero es positivo.\n";
} elseif ($numero < 0) {
    echo "El número $numero es negativo.\n";
} else {
    echo "El número es cero.\n";
}

// 8️⃣ Impresión Condicional: Mar y Tierra (Organizado)

echo "## Impresión Condicional: Mar y Tierra (Organizado) ##\n";

// Arrays para almacenar los números de cada categoría
$mar = [];
$tierra = [];
$mar_tierra = [];

// Clasificar los números del 1 al 30
for ($i = 1; $i <= 30; $i++) {
    if ($i % 3 == 0 && $i % 5 == 0) {
        $mar_tierra[] = $i; // Añadir al array de MarTierra
    } elseif ($i % 3 == 0) {
        $mar[] = $i; // Añadir al array de Mar
    } elseif ($i % 5 == 0) {
        $tierra[] = $i; // Añadir al array de Tierra
    }
}

// Imprimir los resultados agrupados
echo "Mar (Múltiplos de 3): " . implode(', ', $mar) . "\n";
echo "Tierra (Múltiplos de 5): " . implode(', ', $tierra) . "\n";
echo "MarTierra (Múltiplos de 3 y 5): " . implode(', ', $mar_tierra) . "\n";




// 9️⃣ Clasificación de Temperatura
echo "## Clasificación de Temperatura ##\n";

// Solicitar la temperatura al usuario
$temperatura = (float)readline("Ingresa la temperatura en grados Celsius: ");

// Clasificar la temperatura y mostrar el mensaje correspondiente
if ($temperatura < 10) {
    echo "La temperatura es Fría ❄️\n";
} elseif ($temperatura >= 10 && $temperatura <= 25) {
    echo "La temperatura es Templada 🌤️\n";
} else {
    echo "La temperatura es Calurosa 🔥\n";
}

// 🔟 Cuenta Regresiva de Año Nuevo
echo "## Cuenta Regresiva de Año Nuevo ##\n";

// Bucle que cuenta hacia atrás desde 10 hasta 1
for ($i = 10; $i >= 1; $i--) {
    echo $i . "\n";
    sleep(1); // Pausa de 1 segundo para simular la cuenta regresiva
}

// Mensaje final
echo "¡Feliz Año Nuevo! 🎉\n";






?>






