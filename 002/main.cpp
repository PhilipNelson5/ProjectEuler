#include <iostream>

int evenFib(int max)
{
	int a = 1;
	int b = 1;
	int c = 0;
	int sum = 0;
	for(int i = 0; c <= max; ++i)
	{
		c = a + b;
		a = b;
		b = c;
		if(c%2==0) sum += c;
	}
	return sum;
}

int main()
{
	std::cout << evenFib(4000000) << std::endl;
}
