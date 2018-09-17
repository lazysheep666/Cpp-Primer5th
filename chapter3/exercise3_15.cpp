#include<iostream>
#include<vector>
#include<string>
int main(int argc, char const *argv[])
{
  std::string str;
  std::vector<std::string> vec;
  while(std::cin >> str)
    vec.push_back(str);
  return 0;
}
