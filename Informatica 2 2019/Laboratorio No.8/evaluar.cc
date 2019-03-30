#include <string> 
#include "Arith.hh"
#include "Zartih.hh"
#include "Semantica.hh"
#include <iostream>

bool evaluar(const Semantica&, const std::string& expression, int& resultado){

    //bool parseInt(const std::string& valor, int& resultado 
    //Falto funcion evaluar, no pudimos encontrar como evaluar la semantica y al mismo tiempo aplicar las funciones ya declaradas en los .cc
    
    
	
};

int main(){
    std::string ex1("2*3+5");
    std::string ex2("2*mal+3");
    int resultado;
    Arith sem1;
    ZArith sem2(5);

    if(evaluar(sem1, ex1, resultado)){
        // Imprime: "El resultado es '11'"
        printf("El resultado es '%i'", resultado);
    }

    if(evaluar(sem2, ex1, resultado)){
        // Impirme: "El resultado es '2'"
        printf("El resultado es '%i'", resultado);
    }

    if(!evaluar(sem1, ex2, resultado)){
        // Imprime: "No se pudo evaluar ex2"
        printf("No se pudo evaluar ex2");
    }
}