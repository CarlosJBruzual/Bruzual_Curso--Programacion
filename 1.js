let nombre = "Juan"

var nombre_1 = 11 

const nombre_2 = true;

console.log("mi nombre es ", nombre);

let nombre1 = "Carlos";
let edad = "32 anios";
let curso = "el curso basico de programacion";

console.log("mi nombre es ", nombre1, "tengo", edad, "y estoy en", curso);

//calculadora

let numero1 = Number(prompt("ingresa el primer dato"));
console.log("el primer dato es", numero1);
let numero2 = Number(prompt("ingresa el segundo dato"));
console.log("el segundo dato es", numero2);
let suma = numero1 + numero2;
console.log("la suma de", numero1, "y", numero2, "es", suma);
let resta = numero1 - numero2;
console.log("la resta de", numero1, "y", numero2, "es", resta);
let multiplicacion = numero1 * numero2;
console.log("la multiplicacion de", numero1, "y", numero2, "es", multiplicacion);
let division = numero1 / numero2;
console.log("la division de", numero1, "y", numero2, "es", division);
let modulo = numero1 % numero2;
console.log("el modulo de", numero1, "y", numero2, "es", modulo);
let potencia = numero1 ** 2;
console.log("la potencia de", numero1, "elevado a 2 es", potencia);



// calculadora con if else if else

let dato1 = Number(prompt("ingresa el primer numero:"));
console.log("el primer numero es:", dato1);
let dato2 = Number(prompt("ingresa el segundo numero:"));
console.log("el segundo numero es:", dato2);
let operacion = prompt("ingresa la operacion que deseas realizar: suma, resta, multiplicacion, division, modulo, potencia");
if (operacion === "suma")
{
    const suma = dato1 + dato2;
    console.log("la suma de", dato1, "y", dato2, "es", suma);
}

else if (operacion === "resta")
{
    const resta = dato1 - dato2;
    console.log("la resta de", dato1, "y", dato2, "es", resta);
}
else if (operacion === "multiplicacion")
{
    const multiplicacion = dato1 * dato2;
    console.log("la multiplicacion de", dato1, "y", dato2, "es", multiplicacion);
}
else if (operacion === "division")
{
    const division = dato1 / dato2;
    console.log("la division de", dato1, "y", dato2, "es", division);
}
else if (operacion === "modulo")
{
    const modulo = dato1 % dato2;
    console.log("el modulo de", dato1, "y", dato2, "es", modulo);
}
else if (operacion === "potencia")
{
    const potencia = dato1 ** 2;
    console.log("la potencia de", dato1, "elevado a 2 es", potencia);
}
else
{
    console.log("operacion no valida");
}


//calculadora con switch

let ingreso1 = prompt("Ingrese la operacion a realizar")
console.log("La operacion a realizar es: ")
let ingreso2 = Number(prompt("Ingrese el primer dato: "))
console.log("El primer dato es: ", ingreso2)
let ingreso3 = Number(prompt("Ingrese el segundo dato: "))
console.log("El segundo dato es: ", ingreso3)

switch (ingreso1) {
    case "suma":
        const suma = ingreso2 + ingreso3;
        console.log("La suma es", suma);
        break

    case "resta":
        const resta = ingreso2 - ingreso3;
        console.log("La resta es", resta)
        
    case "multiplicacion":
        const multiplicacion = ingreso2 * ingreso3;
        console.log("LA multiplicacion es:", multiplicacion)

    case "division":
        const division = ingreso2 / ingreso3;
        console.log("La division es:", division)
}
 
