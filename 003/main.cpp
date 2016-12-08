#include <iostream>

void primes(long long int n)
{
	for (int i = 2; i <= n; ++i) {
		while (n % i == 0) {
			std::cout << i << std::endl;
			n /= i;
		}
	}
}

int main()
{
	primes(600851475143);
}
