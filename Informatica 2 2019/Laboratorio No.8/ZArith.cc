
#include "ZArtih.hh"

int ZArith::opSuma(const int arg1, const int arg2)const{

    int suma = (arg1 + arg2)%base; 

    return suma; 

}

int ZArith::opProducto(const int arg1, const int arg2)const{

    int multiplicacion = (arg1 * arg2)%base; 

    return multiplicacion; 

}


bool parseInt(const std::string& valor, int& resultado){
    
    
    
    for(int i = 0; i < valor.size(); i++)

    {

        if(valor[i] >= '0' && valor[i] <= '9' ){
            
            if (i ==  (valor.size() - 1) ){

                resultado = std::stoi( valor ); 

            return true;

            }

        }else{

            return false;

        }
        
    }

    return false;
}
  


bool ZArith::parse(const std::string valor, int& resultado)const{
    
    valor.size(); 
    
    std::string p1 , p2;

    if (parseInt(valor, resultado)){

        for(int i = 0; i < valor.size(); i++){
            
            if(valor[i] == '+' || valor[i] == '*' ){

                p1 = valor[i-1];

                p1 = arg1;

                p2 = valor[i+1];

                p2 = arg2;

                if(valor[i] == '+'){

                    resultado = ZArith::opSuma(arg1,arg2);
                    
                }else if(valor[i] == '+'){

                    resultado = ZArith::opProducto(arg1,arg2);
                }

            }else 

            {            

            return false; 

        }

        }

            return true; 

    }

    return true; 

}


