#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::cin;
using std::endl;
int main(int argc, char const *argv[])
{
  string str;
  while(getline(cin, str))
    cout << str << endl;
  return 0;
}
