#include <iostream>

float ProductoPunto(const float* x, const float* y, const int dims); //Funcion de Tarea 2
bool sonOrtogonales(const float* x, const float* y, const int dims); //Funcion de Tarea 3
bool esBase(const float** vectores, const int dims); //Funcion de Tarea 4


int main(){
    const int dims = 3;
    const float x[] = {-3,6,3};
    const float y[] = {4,3,-2};
    const float z[] = {1,0,2}; // Vector z el cual es solo de uso para Tarea 4 
    const float* vectores[] = {x,y,z}; //Declaracion del conjunto de vectores x,y,z con 3 dimensiones

    
    float result = ProductoPunto(x, y, dims); //Funcion de Tarea 2 en funcion de los vectores y las dimensiones 
    
    bool ortogonalidad = sonOrtogonales(x , y, dims); //Funcion de Tarea 3 en funcion de los vectores y las dimensiones 
    
    bool base = esBase(vectores, dims); //Funcion de Tarea 3 en funcion de los vectores y las dimensiones 
    

    printf("El producto punto de los vectores x, y es %.2f\n" , result); //Muestra el producto punto de los vectores dados

    if (ortogonalidad==true){ //Evaluacion de los vectores para saber si son ortogonales 
        printf("Los vectores x, y son ortogonales debido al producto punto\n");
    }else{
        printf("Los vector x, y no son ortogonales por el producto punto de los vectores\n");
    }


    if (base==true){ // Evaluacion de los vectores para saber si son de una base de espacio vectorial
        printf("los vectores x, y, z son una base de espacio vectorial, porque son ortogonales entre si");

    }else
    {
        printf("Los vectores x,y,z no perteneces a una base de espacio vectorial");
    }

    

}


//---------------------------Definicion de Funcion de la Tarea 2-----------------------------
float ProductoPunto(const float* x, const float* y, const int dims){ 
    float result;

    int cont;

    for(cont=0; cont < dims; cont++){
        result += x[cont] * y[cont];
    }
    return result;
  
}


//---------------------------Definicion de Funcion de la Tarea 3-----------------------------
bool sonOrtogonales(const float* x, const float* y, const int dims){ 
    bool ortogonalidad;

    if (ProductoPunto(x,y,dims)==0){

        ortogonalidad = true;

    }else{

        ortogonalidad = false;
        }

        return ortogonalidad;
    }

//---------------------------Definicion de Funcion de la Tarea 4-----------------------------
bool esBase(const float** vectores, const int dims){
    bool base;

    if (ProductoPunto(vectores[0], vectores[1], dims)==0 && ProductoPunto(vectores[1], vectores[2], dims)==0){
        base = true;

    }else{
        base = false;
    }

        return base;




}

