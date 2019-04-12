#pragma once

#include "OperacionBinaria.hh"


class Suma : public OperacionBinaria{

    public:
    Suma(double* valor);
    virtual double operar(const double op1, const double op2) const override;



};

class Multiplicacion : public OperacionBinaria{

    public:
    Multiplicacion();
    virtual double operar(const double op1, const double op2) const override;


};