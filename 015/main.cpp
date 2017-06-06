#include <iostream>

int paths(int r, int d)
{
	if(r == 0 && d == 1) return 1;
	if(r != 0 && d != 1) return paths(r-1, d) + paths(r, d-1);
	if(r == 0) return paths(r, d-1);
	if(d == 1) return paths(r-1, d);
}

int main()
{
	int n;
	std::cout << "enter numbers, x to quit" << std::endl;
	while(std::cin >> n)
	{
		std::cout << n << "x" << n << " : " << paths(n, n)*2 << std::endl;
	}
}

/*
 *	0,0 0,1 0,2
 *	1,0 1,1 1,2
 *	2,0 2,1 2,2
 *	3,0 3,1 3,2
 *
 */
