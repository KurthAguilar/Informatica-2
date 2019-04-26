#pragma once 



template<typename T>


class iterador{


    public:

    virtual bool valor(T& resultado) = 0 {
 
        if(iterador = nullptr){
            return false;
        }else{
           resultado = *iterador;
            return true;

        }

    }

    virtual void siguiente() = 0 {
        iterador++;
    }



};

