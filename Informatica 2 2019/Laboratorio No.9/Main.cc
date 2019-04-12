#include<iostream>
#include <string>

#include "Suma&Mult.hh"
#include "Valor.hh"
#include "Expression.hh"
#include "OperacionBinaria.hh"

/*int parseInt(const std::string ex, int& resultado){

    for(int i = 0; i < ex.size(); i++)
    {

        if(ex[i] >= '0' && ex[i] <= '9'){
            if (i == (ex.size()-1))

            resultado = std::stoi(ex);
             return resultado;
        }else {
            
            return false;
        
        } } }*/




bool parse(const std::string expression, Expression* resultado){

    double r;

     for(int i = 0; i < expression.size(); i++){

         if(expression[i] >= '0' && expression[i] <= '9'){
            if (i == (expression.size()-1))

            r = std::stoi(expression);
        
        }else 

        if(expression[i] == '+' || expression[i] <= '*' ){
            
            if (( expression.size() - 1 ) == '+' ){

                resultado = new Suma[Valor(5.8)];    // No pudimos ingresar a los espacios de memoria los valores y ademas operarlos con SUMA Y MUltiplicacion. Intentamos 
                                                     // Con varias pruebas basicas, pero no encontramos el problema. 
            return true;

            }
            
            else if(( expression.size() - 1 ) == '*'){

            resultado = new Multiplicacion(new Valor(r[i])); 

            return true;

            }
            

        }else{

            return false;
        }
        
    
}}

int main(){}