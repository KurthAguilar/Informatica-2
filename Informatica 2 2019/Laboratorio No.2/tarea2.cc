#include <iostream>

int main(){
    int valor1 = 1;
    int valor2 = 1;

    int resultado = ++valor1 + valor2++;

    std::printf("valor1: %i, valor2: %i, resultado: %i\n", valor1, valor2, resultado);

//RESPUESTA AL FENOMENO DE RESULTADO == 3//

/*De acuerdo con lo experimentado existen dos opciones para el caracter incremento "++", puede que exista
el pre-incremento y el pos-incremento; ambos realizan la tarea de aumentar valor a la variable afectada,
pero estas actuan de diferente manera o mejor dicho, en diferente tiempo. A la hora de imprimir el
valor1 y valor2 se puede determinar que el aumento existio, pero en el resultado no se vio reflejado y
esto ocurre porque la posicion pre- o pos- indica cuando se realiza el aumento, y en este ejemplo durante
la operacion el incremento se realiza sin embargo en valor2++ no se toma en cuenta el incremento en la 
operacion, porque el pos-incremento funciona de una manera en la cual la variable resultado toma en cuenta
primeto el valor2 y realiza la declaracion de la variable como 1, y por eso el resultado sale 3; porque, 
el pos-incremento asigna el valor primero a la operacion y despues de eso ejecuta el aumento, y lo contrario
con el pre-incremeto; primero ocurre el incremento y despues se asigna el valor a la operacion resultado.  */
}