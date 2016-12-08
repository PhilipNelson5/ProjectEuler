#include <iostream>

bool isPrime(int n)
{
	for(int i = 2; i < n; ++i)
		if(n%i == 0)
			return false;
	return true;
}

int nthPrime(int n)
{
	int primes = 0;
	int nth = 0;
	for(int i = 1; primes <= n; ++i)
		if(isPrime(i))
		{
			++primes;
			nth = i;
		}
	return nth;
}

int main()
{
	std::cout << nthPrime(10001) << std::endl;
}
