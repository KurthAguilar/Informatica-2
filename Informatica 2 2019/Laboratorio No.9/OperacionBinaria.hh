#pragma once

#include "Expression.hh"


class OperacionBinaria: public Expression{

    public:

    OperacionBinaria(Expression* _operador1, Expression* _operador2) : operador1(_operador1), operador2(_operador2){};

    virtual double operar(const double op1, const double op2) const = 0 ;

    virtual double evaluar() override;


    private:

    Expression* operador1;

    Expression* operador2;

};