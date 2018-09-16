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
  for (auto &ch : str)
    ch = 'X';
  cout << str << endl;
  return 0;
}
