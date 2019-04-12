#include "OperacionBinaria.hh"
#include "Valor.hh"
#include "Expression.hh"


double OperacionBinaria::evaluar(){


    double op1 = operador1->evaluar();

    double op2 = operador2->evaluar();
    
    double resultado = operar(op1, op2);

    return resultado;

    }
    

