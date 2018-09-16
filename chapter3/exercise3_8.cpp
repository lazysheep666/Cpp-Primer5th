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
  //while
  decltype(str.size()) n = 0;
  while(n < str.size())
    str[n++] = 'X';
  cout << str << endl;
  //for
  for (n = 0; n < str.size(); str[n++] = 'Y')
  cout << str << endl;
  return 0;
}
