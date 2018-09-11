# include <iostream>
# include "./Sales_item.h"
using namespace std;
int main(int argc, char const *argv[])
{
  Sales_item total, item;
  if (cin >> total) {
    while(cin >> item) {
      if (total.isbn() == item.isbn()) {
        total += item;
      } else {
        cout << total << endl;
        total = item;
      }
    }
    cout << total << endl;
    return 0;
  } else {
    cout << "no data";
    return -1;
  }
}
