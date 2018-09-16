#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main(int argc, char const *argv[])
{
  string str;
  getline(cin, str);
  for(auto ch : str)
    if (!ispunct(ch)) cout << ch;
  cout << endl;
  return 0;
}
