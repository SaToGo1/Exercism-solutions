module Hamming (distance) where

distance :: String -> String -> Maybe Int
distance xs ys 
  | not (isLonger xs ys) = Just (distanceRec xs ys)
  | otherwise = Nothing

distanceRec [] [] = 0
distanceRec (hdX : xs) (hdY : ys)
  | hdX == hdY = distanceRec xs ys
  | hdX /= hdY = distanceRec xs ys + 1
  
isLonger xs ys
  | length xs == length ys = False
  | otherwise = True