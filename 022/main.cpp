#include <algorithm>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

namespace
{
	std::vector<std::string> names;
}

int score(std::string name)
{

}

int main()
{
	std::ifstream fin("names.txt");
	if(!fin) {std::cout << "BAD FILE!" << std::endl; return EXIT_FAILURE;}

	std::string file;
	fin >> file;

	bool newWord = false;
	std::string nextWord = "";
	for(unsigned int i = 0; i < file.size(); ++i)
	{
		if(file[i] == "\"")
			
			file[i] != ",")
	}

		names.push_back(name);

	std::sort(names.begin(), names.end(), [](std::string a, std::string b){return a < b;});

	std::cout << "First names " << names[0] << std::endl << "END" << std::endl;
}
