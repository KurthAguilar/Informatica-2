#include <iostream>

int main()
{
 int empleados = 5; 
 /* Se usa int, porque los empleados no necesitan ser presentados con float porque 
        siempres seran enteros. 
    No se utiliza const, porque el valor de empleados sera afectado durante el programa*/

 const float sueldo = 110.50;
 /* Se usa float, porque se necesitara mas memoria, porque el sueldo sera presentado con cantidades
 decimales. 
    Se utiliza const, porque el valor del sueldo sera fijo durante el programa*/

 float sueldototal = empleados * sueldo;
 /* Se usa float, porque el sueldototal puede que produzca un numero decimal ya que es la operacion
 entre un float e int
    No se utiliza const, porque el valor proviene de una operacion que depende de otros valores, por lo 
tanto varia*/

 const float impuesto = 0.1;
 /* Se usa float, porque el impuesto sera presentado con cantidades decimales para efectos del programa. 
    Se utiliza const, porque el valor del impuesto no varia, ni sera afectado*/

 float pagoimpuesto = sueldototal * impuesto;
 /* Se usa float, porque el pagoimpuesto puede que produzca un numero decimal ya que es la operacion
 entre un float e float
    No se utiliza const, porque el valor proviene de una operacion que depende de otros valores, por lo 
tanto puede que varie*/

std::printf("Estos son los sueldos de 5 empleados: %f %f \n",sueldototal, pagoimpuesto);


{ /* Se declara un bloque para poder imprimir nuevos valores, porque los empleados suben +3, por lo tanto
habran resultados diferentes, y de esta manera podemos presentar el dato actualizado con el original.*/
 ++ ++ ++empleados;
 float sueldototal = empleados * sueldo;
 float pagoimpuesto = sueldototal * impuesto;
   
std::printf("Estos son los sueldos de 8 empleados: %f %f \n",sueldototal, pagoimpuesto);
}

}