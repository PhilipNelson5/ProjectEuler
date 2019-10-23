#include <iostream>
#include <vector>

int maxpath(std::vector<int> const& tree, int curr = 0, int row = 0)
{
  if (curr > tree.size() - 1) return 0;
  int l = row + curr + 1;
  int r = row + curr + 2;
  int max = tree[l] > tree[r] ? l : r;

  int maxl = maxpath(tree, l, row+1);
  int maxr = maxpath(tree, r, row+1);
  int maxp = std::max(maxl, maxr);
  return  maxp + tree[curr];
}

int main()
{
  int tmp;
  std::vector<int> tree;
  while (std::cin >> tmp)
  {
    tree.push_back(tmp);
  }
  int maxsum = maxpath(tree);
  std::cout << '\n' << maxsum << '\n';
}
