#include <iostream>

bool isPrime( int n )
{
	if( n == 2 || n == 3 )
		return true;

	if( n == 1 || n % 2 == 0 )
		return false;

	for( int i = 3; i * i <= n; i += 2 )
		if( n % i == 0 )
			return false;

	return true;
}

int main()
{
	long int sum = 0;
	for(int i = 0; i < 2000000; ++i)
		if(isPrime(i))
			sum += i;
	std::cout << sum << std::endl;
}
