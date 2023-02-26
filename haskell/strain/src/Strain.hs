module Strain (keep, discard) where

discard :: (a -> Bool) -> [a] -> [a]
discard p xs = keep (not . p) xs

keep :: (a -> Bool) -> [a] -> [a]
keep _ [] = []
keep p (hd : tl)
	| p hd = hd : keep p tl 
	| otherwise = keep p tl
