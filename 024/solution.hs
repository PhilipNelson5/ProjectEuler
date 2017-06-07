import Data.List

quicksort :: Ord a => [a] -> [a]
quicksort [] = []
quicksort (p:xs) = (quicksort lesser) ++ [p] ++ (quicksort greater)
  where
  lesser  = filter (< p) xs
  greater = filter (>= p) xs

last (take 1000000(quicksort (permutations [0..9])))
