#include <iostream>
#include <vector>

using std::vector; using std::cout; using std::endl; using std::cin;

int main(int argc, char const *argv[])
{
  vector<int> vec;
  for (int buffer; cin >> buffer; vec.push_back(buffer));
  if (vec.size() < 2) {
    cout << " please enter at least two integers";
    return -1;
  }
  for (auto it = vec.begin(); it + 1 != vec.end(); it++)
    cout << *it + *(it + 1) << " ";
  cout << endl;
  for (auto lft = vec.cbegin(), rht = vec.cend() - 1; lft <= rht; ++lft, --rht)
    cout << *lft + *rht << " ";
  cout << endl;
  return 0;
}