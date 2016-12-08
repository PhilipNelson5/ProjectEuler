#include <iostream>

bool isDivisible(int n)
{
	for(int i = 2; i <= 20; ++i)
		if(n%i != 0) return false;
	return true;
}

int main()
{
	int min = 0;
	int curr = 0;
	for(int i = 1; !isDivisible(i); ++i)
	{
		curr = i;
	}
	std::cout << curr+1 << std::endl;
}
