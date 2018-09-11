# include <iostream>
# include "./Sales_item.h"
using namespace std;
int main(int argc, char const *argv[])
{
  Sales_item currItem, nextItem;
  if (cin >> currItem) {
    int count = 0;
    while (cin >> nextItem) {
      if (currItem.isbn() == nextItem.isbn()) {
        count ++;
      } else {
        cout << currItem.isbn() << "occurs" << count << "times" << endl;
        currItem = nextItem;
        count = 1;
      }
    }
    cout << currItem.isbn() << "occurs" << count << "times" << endl;
  }
}
