#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include <vector>

std::string add(std::string a, std::string b)
{
	std::string sum = "";
	int num = 0;
	int carry = 0;
	std::string result;

	if(a.size() > b.size())
	{
		for(int i = a.size()-b.size(); i > 0; --i)
			b.insert(0, "0");
	}
	if(b.size() > a.size())
	{
		for(int i = b.size()-a.size(); i > 0; --i)
			a.insert(0, "0");
	}
	for(int i = a.size()-1, j = b.size()-1; i >= 0; --i, --j)
	{
		num = a[i]+b[j] - 96 + carry;
		carry = (num) / 10;
		num %= 10;
		result = static_cast<char>(num+48);
		sum.insert(0, result);
	}

	if(carry > 0)
	{
		result = static_cast<char>(carry+48);
		sum.insert(0, result);
	}

	return sum;
}

int main()
{
	std::ifstream fin("numbers.txt");
	if(!fin)
		std::cout << "Bad File" << std::endl;

	std::string num;
	std::string sum;

	/*
		 std::cout << add("23456", add("10", "123")) << std::endl;
		 */

	while(!fin.eof())
	{
		std::getline(fin, num);
		sum = add(sum, num);
	}
	for(int i = 0; i < 10; ++i)
		std::cout << sum[i];
	std::cout << std::endl << sum << std::endl;

}

/*  11
 *  789
 *  456
 *  ---
 * 1245
 */
