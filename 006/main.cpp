#include <iostream>
#include <cmath>

int squareSum(int n)
{
	int sum = 0;
	for(int i = 0; i <= n; ++i)
		sum += i;
	return sum * sum;
}

int sumSquare(int n)
{
	int sum = 0;
	for(int i = 0; i <= n; ++i)
		sum += (i * i);
	return sum;
}

int main()
{
	std::cout << squareSum(100) - sumSquare(100) << std::endl;
}
