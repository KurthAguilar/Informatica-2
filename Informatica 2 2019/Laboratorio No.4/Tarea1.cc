#include <iostream>


void porValor(int valor){
    valor = 42;
}

void porReferencia(int& valor){
    valor = 42;
}

int main(){
    int valor1 = 0;
    int valor2 = 0;

    porValor(valor1);
    porReferencia(valor2);

    printf("El resultado por valor es %i\n", valor1);
    printf("El resultado por referencia es %i\n", valor2);
}
/* Despues de haber moldeado, probado y revisar el fenomeno sucedido en el cual PorValor y
PorReferencia presentan resultados diferentes, se llego a una conclusion de lo que puede estar
sucediendo durante la compilacion del programa y se presenta lo siguiente: Durante el proceso
de este programa se pudo observar que 'porReferencia' muestra un diferencia en la cual se le 
agrega al tipo int el signo &, el cual significa referencia en este caso; por ende, lo que hace
el operador es dar el valor que esta guardado en una direccion de la memoria; es decor, la 
funcion porReferencia nos da el valor 42 porque el operador & nos esta reflejando un valor que 
fue guardado en una direccion especifica de la memoria. Lo contrario sucede con la funcion 
porValor, durante esta declaracion solo se declara una variable; sin embargo, al implementarla
en el main, el valor no se refleja porque este es perteneciente a la funcion, y en la funcion
main ya no es reflejada porque solo forma parte de la memoria pero no se sabe donde esta por 
ende se refleja 0.
*/
