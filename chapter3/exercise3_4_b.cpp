#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main(int argc, char const *argv[])
{
  string str1, str2;
  cin >> str1 >> str2;
  if (str1.size() == str2.size())
    cout << "str1 and str2 are the same string" << endl;
  else {
    cout << "the longer string is " << (str1.size() > str2.size() ? str1 : str2) << endl;
  } 
  return 0;
}
