#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
  std::vector<int> vec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  for (auto it = vec.begin(); it != vec.end(); it++)
    *it *= 2;
  for (auto i : vec)
  std::cout << i << " ";
  return 0;
}