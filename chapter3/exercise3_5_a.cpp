#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main(int argc, char const *argv[])
{
  string str;
  string sumStr;
  while (cin >> str) {
    sumStr += str;
  }
  cout << sumStr << endl;
  return 0;
}
