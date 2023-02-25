module CollatzConjecture (collatz) where

collatz :: Integer -> Maybe Integer
collatz n = 
  if n == 1
    then n
    else if isEven
        then collatz evenOperation n 
        else collatz oddOperation n

isEven x = x mod 2 == 0
isOdd x = x mod 2 /= 0

evenOperation n = n / 2
oddOperation n = n*3 + 1