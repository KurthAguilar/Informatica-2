#pragma once

#include "Semantica.hh"

class Arith : public Semantica{

    public: 

    //int _arg1 = arg1;
    //int _arg2 = arg2;
    

    virtual bool parse(const std::string valor, int& resultado) const override; 

    virtual int opSuma(const int arg1, const int arg2) const override; 

    virtual int opProducto(const int arg1, const int arg2) const override; 


    private:

    int arg1;

    int arg2;
     
};
