# include <iostream>
int main(int argc, char const *argv[])
{
  int low = 0, high = 0;
  std::cout << "Please enter two numbers" << std::endl;
  std::cin >> low >> high;
  low = low > high ? high : low;
  high = high < low ? low : high;
  for (;low <= high;) {
    std::cout << low++ << std::endl;
  }
  return 0;
}
