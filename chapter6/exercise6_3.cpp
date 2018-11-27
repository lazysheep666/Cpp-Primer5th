#include<iostream>

using std::cout; using std::endl;

int fact(int value) {
  if (value == 1) return 1;
  return value * fact(value - 1);
}

int main(int argc, char const *argv[])
{
  int j = 5;
  cout << fact(5) << endl;
  return 0;
}
