module Main exposing(esPrimo,fibonacci,primos,nPrimos)

--EJERCICIO NO.1--
 
esPrimoHelp counter x  = -- Declaramos variable que servira como contador para la funcion auxiliar de esPrimo
    if x == 1 then True
    -- Usamos caso base 1 como primo dando asi un true
    
    else if x == 2 then True   
    --    Usamos caso base 2 como primo dando asi un true
            
        else if modBy counter x  == 0 then False  
        -- Caso para evaluar cualquier valor Int diferente a 1 y 2, usando la funcion modulo.
               
             else if counter == x - 1  then True    
                    -- Declaramos counter, como variable contador para reducir las opciones y asi llegar al caso base.
                else esPrimoHelp  (counter + 1 ) x
                    -- Se llama recursivamente la funcion para seguir evaluando con el contador el valor ingresado.


esPrimo: Int -> Bool
esPrimo x = esPrimoHelp 2 x 
-- Se llama a la funcion auxiliar para evaluar el valor x


--EJERCICIO NO.2--

fibonacci: Int -> Int
fibonacci x =
-- Declaracion de variable a usar para la funcion
    if x == 0 then 0
        --Evaluacion del caso base 0
    
        else if x == 1 then 1
            --Evaluacion del caso base 1
    
           else if x > 1 then fibonacci (x-1) + fibonacci (x-2)
                --Evaluacion de cualquier valor diferente a los casos bases, con la definicion de fibonacci.
            
                else 0 
                    --Caso contrario, en el caso que pueda existir algun valor que no cumpla los casos

--EJERCICIO 3--

primos: Int -> List Int
primos x =
    if x == 0 then []
        --Declaramos caso base de 0, para dar una lista vacia

        else if esPrimo x == False then primos (x-1)
            --Evaluacion de cualquier caso base diferente a 0, en este se llama a la funcion esPrimo para evaluar los numeros...
            --...primos del parametro ingresado, y para esto se usa un contador que se acercara al caso base

            else x :: primos (x-1)
                --Se usa  la notacion para poder ingresar los numeros primos obtenidos dentro de una lista. 


--EJERCICIO 4--

nPrimos: Int -> List Int
nPrimos x = posCont (x,1) 
--Declaracion de la funcion con un parametro que equivaldra a una pareja ordenada que sera la regla para saber la cantidad de primos...
--...a ingresar en la lista
posCont (x,y) =  
    if x == 0 then [] 
        --Se declara el caso base 0, para la lista vacia

        else if esPrimo y == False then posCont (x, y + 1)
            --Se llama a la funcion esPrimo para evaluar el parametro, y al dar falso ejecuta un contador para y.


            else y :: posCont (x - 1, y + 1) 
                --el parametro y es agregado a la lista cuando este es true en el paso anterior, y se le disminui al parametro x..
                --...para simular la reduccion de una posicion o cantidad en los numeros primos que apareceran