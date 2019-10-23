#include <bitset>
#include <cmath>
#include <iostream>
#include <string>

bool isPalindrome(std::string const& s)
{
  for (int i = 0; i < std::ceil(s.length() / 2.0); ++i)
  {
    if (s[i] != s[s.length() - i - 1]) return false;
  }
  return true;
}

bool isPalindrome10(unsigned int const n)
{
  return isPalindrome(std::to_string(n));
}

bool isPalindrome2(unsigned int const n)
{
  std::string bits = std::bitset<32>(n).to_string();

  return isPalindrome(bits.substr(bits.find('1')));
}

int main()
{
  auto sum = 0u;
  for (auto i = 1u; i < 1e6; ++i)
  {
    if (isPalindrome10(i) && isPalindrome2(i)) { sum += i; }
  }
  std::cout << sum << std::endl;
}
