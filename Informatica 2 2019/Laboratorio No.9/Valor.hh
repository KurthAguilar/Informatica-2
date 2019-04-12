#pragma once

#include "Expression.hh"

class Valor: public Expression{

    public:

    Valor(double _valor) : valor(_valor){};

    virtual double evaluar() override;

    

    private:

    double valor;

};