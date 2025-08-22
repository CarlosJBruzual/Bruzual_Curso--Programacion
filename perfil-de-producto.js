// ## 1️⃣ Perfil de Producto

//Declara variables para describir un producto de una tienda online:

//- Usa `const` para el nombre del producto (`nombreProducto`), que será **"Tablet 10 pulgadas"**.
//- Usa `let` para el precio (`precio`), que será **450.99**.
//- Usa `let` para la cantidad en stock (`stock`), que será **25**.
//- Usa `const` para si el producto tiene envío gratis (`envioGratis`), que será **true**.

//Finalmente, muestra cada una de estas variables en la consola con un mensaje descriptivo.  
//Ejemplo: `Nombre del producto: Tablet 10 pulgadas`.


const nombreProducto = "Tablet 10 pulgadas";
let precio = 450.99;
let stock = 25;
const envioGratis = "Envio Gratis";

console.log("Nombre del Producto:", nombreProducto, "Precio:", precio, "en existencia ", stock, "dispositivos", "este producto cuenta con: ", envioGratis )

console.log("Calculo de Compra");
let cantidad = Number(prompt("Ingrese cantidad de Dispositivos a comprar: "));
console.log("Ingreso la cantidad de: ", cantidad);
let subTotal = precio * cantidad;
console.log("El sub-total es: ", subTotal);
let impuesto = subTotal * 0.07;
let total = subTotal + impuesto;
console.log("El total es: ", total) ;