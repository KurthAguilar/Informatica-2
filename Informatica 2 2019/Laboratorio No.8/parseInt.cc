#include <string> 
#include <iostream> 


bool parseInt(const std::string& valor, int& resultado){

    for(int i = 0; i < valor.size(); i++)
    {
        if(valor[i] >= '0' && valor[i] <= '9' ){
            
            if (i == ( valor.size() - 1 )){

                resultado = std::stoi( valor ); 

            return true;
            }

        }else{

            return false;
        }
        
    }
    return false;
}

// Main para efectos de ejemplo
int main(){
    std::string str1("12345");

    int resultado = 0;
    if(parseInt(str1, resultado)){
        // Imprime "Resultado 12345"
        printf("Resultado1 %i", resultado);
    }

    if(!parseInt(str1, resultado)){
        // Imprimie "No se pudo parsear str2"
        printf("No se pudo parsear str2");
    }
}
       
    
