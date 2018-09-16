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
  if (str1 == str2)
    cout << "str1 and str2 are the same string" << endl;
  else {
    string longStr = str1 > str2 ? str1 : str2;
    cout << "the longer string is " << longStr << endl;
  } 
  return 0;
}
