# include <iostream>
int main()
{
  /* code */
  int temp = 50;
  int sum = 0;
  while(temp < 100) {
    sum += temp++;
  }
  std::cout << sum;
  return 0;
}
