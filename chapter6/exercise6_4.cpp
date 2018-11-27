#include <iostream>
#include <string>

using std::cin; using std::cout; using std::endl; using std::string;

int fact(int i)
{
  return i == 1 ? 1 : i * fact(i - 1);
}

void interactive_fact() {
  string const prompt = "Enter a number within [1, 13) :\n";
  string const out_of_range = "Out of range, please try again.\n";
  for (int j; cout << prompt, cin >> j;) {
    if (j < 0 || j > 12) {
      cout << out_of_range;
      continue;
    }
    cout << fact(j) << endl;
  }
}

int main ()
{
  interactive_fact();
}