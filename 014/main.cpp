#include <iostream>
#include <vector>

namespace
{
	std::vector<int> size(1000001, 0);
}

int sequence(long long int n)
{
	//std::cout << n << " ";
	if(n == 1) return 1; //end of sequence
	if(n%2 == 0) return sequence(n/2) + 1;
	return sequence(3*n + 1) + 1;
}

int collatz(long long int n)
{
	int length;
	if(n == 1) return 1; //end of sequence
	if(n < 1000000 && size[n] != 0) return size[n]; //short circuit

	if(n%2 == 0) //even
		length = collatz(n/2) + 1;
	else         //odd
		length = collatz(3*n + 1) + 1;
	if(n < 1000000)
		size[n] = length; //save length
	return length;
}

int main()
{
	int SIZE = 1000000;
	/*
	std::cout << "Enter a size: ";
	std::cin >> SIZE;
	SIZE-=1;
	*/

	for(int i = SIZE; i > 1; --i)
		if(size[i] == 0)
			collatz(i);

	int max = 0;
	int loc = 0;

	for(int i = SIZE; i > 0; --i)
	{
		if(size[i] > max)
		{
			max = size[i];
			loc = i;
		}
		//std::cout << i << ": " << size[i] << std::endl;
	}

	std::cout << loc << " " << max << std::endl;
	//std::cout << sequence(loc) << std::endl;
}
