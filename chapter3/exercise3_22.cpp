#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using std::vector; using std::string; using std::cout; using std::cin; using std::isalpha;

int main(int argc, char const *argv[])
{
  vector<string> vec;
  for(string str; getline(cin, str); vec.push_back(str))
  for(auto &word : vec) {
    for(auto &ch : word) 
      if (isalpha(ch)) ch = toupper(ch);
    cout << word << " ";
  }
  return 0;
}
