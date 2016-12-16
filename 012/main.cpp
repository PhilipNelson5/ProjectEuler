#include <iostream>
#include <cmath>
#include <cstdlib>

int getDiv(long long int n)
{
	int ct = 0;
	for(int i = 1; i <= sqrt(n); ++i)
	{
		if(n%i == 0)
		{
			++ct;
		}
	}
	return ct*2;
}

int main()
{
	long long int curr = 0;
	int div = 0;
	for(long int i = 1; ; ++i)
	{	
		curr += i;
		div = getDiv(curr);
		if(div > 500)
		{
			std::cout << curr << ": " << div << std::endl;
			return EXIT_SUCCESS;
		}
	}
}
