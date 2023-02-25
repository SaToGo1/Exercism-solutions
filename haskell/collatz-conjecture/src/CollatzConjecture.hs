module CollatzConjecture (collatz) where

collatz :: Integer -> Maybe Integer
-- collatz n = 
--   if n == 0 then
--     Nothing
--     else
--       if n == 1 then 
--           n
--         else 
--           if isEven n then 
--             collatz (evenOperation n) + 1
--           else 
--             collatz (oddOperation n) + 1

collatz n 
  | n == 0 = Nothing
  | n == 1 = Just 0
  | isEven n = Just (collatz ( evenOperation n ) + 1)
  | isOdd n = collatz ( oddOperation n )

isEven x = (mod x 2) == 0
isOdd x = (mod x 2) /= 0

evenOperation n = n `div` 2
oddOperation n = n*3 + 1