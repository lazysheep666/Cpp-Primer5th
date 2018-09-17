#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;
using std::cin;

int main(int argc, char const *argv[])
{
  vector<int> vec;
  for(int i; cin >> i; vec.push_back(i))
  if (vec.empty())
  {
    cout << "input at least one integer." << endl;
    return -1;
  }

  if (vec.size() == 1)
  {
    cout << "only one integer " << vec[0] << ", it doesn't have any adjacent elements." << endl;
    return -1;
  }

  for (int i = 0; i < vec.size() - 1; ++i)
    cout << vec[i] + vec[i + 1] << " ";
  cout << endl;
  return 0;
}
