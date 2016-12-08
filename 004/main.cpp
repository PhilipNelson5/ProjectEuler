#include <iostream>
#include <string>
#include <sstream>

bool isPalindrome(int n)
{
	std::stringstream ss;
	ss << n;
	std::string s = ss.str();
	int j = s.length()-1;
	for(int i = 0; i <= j; ++i, --j)
	{
		if(s[i]!=s[j])
			return false;
	}
	return true;
}

int largetsPalindrome()
{
	int max = 0;
	for(int i = 999; i > 99; --i)
		for (int j = 999; j > 99; --j)
		{
			int n = i*j;
			if(isPalindrome(n) && n > max) 
				max = n;
		}
	return max;
}

int main()
{
	std::cout << largetsPalindrome() << std::endl;
}
