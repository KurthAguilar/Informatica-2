module Main exposing (..)

--EJERCICIO NO.1--\

resta: Int -> Int -> Int
resta x y =
    if x - y < 1 then 0 

        else x - y

multiplicacion: Int -> Int -> Int
multiplicacion x y = 
    if x == 0 then 0 
        
        else if y == 0 then 0

            else x + x * (resta y 1) 

type Maybe a = Some a | None

residuo x y = modBy y x

divisionHelp a x y =
    if resta x y > 0 then divisionHelp (a+1) (resta x y) y  
        else a 

division: Int -> Int -> (Int,Int)
division x y  =

    if x == 0 then (0,0)
        else if y == 0 then (1,1)
            else if modBy y x == 0 then (divisionHelp 1 x y,0)  
            else (divisionHelp 1 x y,modBy y x)


--EJERCICIO 2--