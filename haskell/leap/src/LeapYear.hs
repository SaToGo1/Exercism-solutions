module LeapYear (isLeapYear) where

isDivisibleBy4 x = (x/4) == 0 :: Integer -> Bool
isDivisibleBy100 x = (x/100) == 0 :: Integer -> Bool
isDivisibleBy400 x = (x/400) == 0 :: Integer -> Bool

isLeapYear :: Integer -> Bool
isLeapYear year = (isDivisibleBy4 year && not isDivisibleBy100 year) || isDivisibleBy400 year
