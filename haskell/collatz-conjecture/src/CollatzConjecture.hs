module CollatzConjecture (collatz) where

collatz :: Integer -> Maybe Integer
collatz n
  | n == 1 = Just 0
  | n > 0 = Just (collatzRecursive n)
  | otherwise = Nothing

collatzRecursive x
  | x == 1 = 0 
  | isEven x = collatzRecursive (evenOperation x) + 1
  | isOdd x = collatzRecursive (oddOperation x) + 1

isEven x = (mod x 2) == 0
isOdd x = (mod x 2) /= 0

evenOperation x = div x 2
oddOperation x = x*3 + 1