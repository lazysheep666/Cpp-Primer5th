# include <iostream>
# include "./Sales_item.h"
using namespace std;
int main(int argc, char const *argv[])
{
  Sales_item item1, item2;
  cin >> item1 >> item2;
  if (item1.isbn() == item2.isbn()) 
    cout << item1 + item2 << endl;
  else 
    cerr << "different ISBN";
}
