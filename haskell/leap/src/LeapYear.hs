module LeapYear (isLeapYear) where

isLeapYear :: Integer -> Bool
isLeapYear year = (isDivisibleBy4 year && not (isDivisibleBy100 year)) || isDivisibleBy400 year

isDivisibleBy4 x = (mod x 4) == 0
isDivisibleBy100 x = (mod x 100) == 0
isDivisibleBy400 x = (mod x 400) == 0