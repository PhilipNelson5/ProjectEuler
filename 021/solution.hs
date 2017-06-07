divisor n = [x |x<-[1..n-1],n `mod` x == 0]

sumDiv n = sum (divisor n)

isAmicable n = (b == n) && (a /= b) 
  where a = sumDiv n
	b = sumDiv a

sumAmicable xs = sum [if isAmicable x then x else 0 | x <- xs]

listAmicable xs = [if isAmicable x then x else 0 | x <- xs]
