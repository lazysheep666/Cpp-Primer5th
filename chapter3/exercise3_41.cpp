#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;
using std::begin; 
using std::end;
int main() {
  int arr[] = {1, 2, 3, 4};
  vector<int> vec(begin(arr), end(arr));

  for (auto i : vec)
    cout << i << " ";
  cout << endl;
  return 0;
}