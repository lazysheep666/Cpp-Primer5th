#include<iostream>
#include<vector>
int main(int argc, char const *argv[])
{
  int i;
  std::vector<int> vec;
  while(std::cin >> i)
    vec.push_back(i);
  return 0;
}
