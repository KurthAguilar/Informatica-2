module Main exposing (..)
--EJERCICIO 1--

suma: Int -> Int -> Int 
suma x y = x + y 
    --Definicion de suma, la cual suma 2 valores x y 

multiplicacion: Int -> Int -> Int 
multiplicacion x y = x * y 
    --Definicion de la multiplacion que da el producto de x y

--EJERCICIO 2--
type Expresion = Suma Expresion Expresion | Multiplicacion Expresion Expresion  | Valor Int 
    

reducir : (Int -> Int -> Int , Int -> Int -> Int) -> Expresion -> Int
reducir (asuma, Multiplicacion) expresion =
    case oper of
        Suma ex1 ex2 -> Suma2 (reducir (Suma2, Multiplicacion2) ex1) (reducir (Suma2, Multiplicacion2) ex2)
        Multiplicacion ex1 ex2 -> Multiplicacion2 (reducir (Suma2, Multiplicacion2) ex1) (reducir (Suma2, Multiplicacion2) ex2)
        Valor z -> z

        
