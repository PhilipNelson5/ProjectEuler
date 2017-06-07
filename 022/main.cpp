#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

namespace
{
  std::vector<std::string> names;
}

int score(std::string name)
{
  auto sum = 0;
  for (auto c : name) sum += c - 'A' + 1;
  return sum;
}

int main()
{
  std::ifstream fin("names.txt");
  if (!fin)
  {
    std::cout << "BAD FILE!" << std::endl;
    return EXIT_FAILURE;
  }

  std::string strnames;
  fin >> strnames;

  auto beg = strnames.find("\"");
  auto end = strnames.find("\"", beg + 1);

  while (beg != std::string::npos)
  {
    names.emplace_back(strnames.begin() + beg + 1, strnames.begin() + end);
    beg = strnames.find("\"", end + 1);
    end = strnames.find("\"", beg + 1);
  }

  std::sort(names.begin(), names.end(), [](std::string a, std::string b) {
    return a < b;
  });

  int scores = 0;
  for (int i = 0; i < names.size(); ++i) scores += score(names[i]) * (i+1);

  std::cout << scores << std::endl;
}
