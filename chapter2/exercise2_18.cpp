# include <iostream>
int main(int argc, char const *argv[])
{
  int a = 2, *p = &a;
  int b = 1;
  p = &b;
  *p = b;
}
