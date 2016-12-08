#include <iostream>

int multiplesOf(int x, int y, int high)
{
	int sum = 0;
	for(int i = 0; i < high; ++i)
		if(i%x == 0 || i%y == 0)
			sum += i;
	return sum;
}

int main()
{
	std::cout << multiplesOf(3, 5, 1000) << std::endl;
}
