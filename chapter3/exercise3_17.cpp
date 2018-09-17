#include<iostream>
#include<vector>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main(int argc, char const *argv[])
{
  string word;
  vector<string> vec;
  while(cin >> word)
    vec.push_back(word);
  for(auto &str : vec)
    for(auto &c : str)
      c = toupper(c);
  for (decltype(vec.size()) i = 0; i < vec.size(); i++)
    cout << vec[i] << endl;
  return 0;
}
