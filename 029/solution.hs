import Data.Set 

mkUniq :: Ord a => [a] -> [a]
mkUniq = toList . fromList

pairs n = [(x,y) |x<-[2..n],y<-[2..n]]

square xs = [x^y |(x,y)<-xs]

answer = length( mkUniq (square (pairs 100)))
