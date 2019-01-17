module Main exposing (..)

zipWith: (a->b->c) -> List a -> List b -> List c 
zipWith f l1  l2 = case (l1, l2) of
    ([], _) -> []
    (_, []) -> []
    (a::l3,b::l4) ->  f a b :: zipWith f l3 l4
groupByHelp f lista =
    let
        analisis factor = f lista 
        if analisis factors == True then
        True
        else False  
    in
    
groupBy: (a -> Bool) -> List a -> (List a, List a)
groupBy f l1 =  
   


fold : (b -> a -> b) -> b -> List a -> b
fold f base lista =
    case lista of
        [] -> base
        x::xs -> f (fold f base xs) x


    






        