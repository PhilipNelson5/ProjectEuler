#include <iostream>
#include <cstdlib>
#include <cmath>

int main()
{ 
	double d_sqrt = 0;
	int i_sqrt = 0;
	int c = 0;
	for(int b = 1; b < 500; ++b)
		for(int a = 1; a < b; ++a)
		{
			c = (a*a) + (b*b);
			d_sqrt = sqrt(c);
			i_sqrt = d_sqrt;
			if(d_sqrt == i_sqrt)
			{
				if(a + b + i_sqrt == 1000)
				{
					std::cout << a << ", " << b << ", " << i_sqrt << std::endl;
					std::cout << a*b*i_sqrt << std::endl;
					return EXIT_SUCCESS;
				}
				//std::cout << a << ", " << b << ", " << i_sqrt << std::endl;
			}
		}
}
