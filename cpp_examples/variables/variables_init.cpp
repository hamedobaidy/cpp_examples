// initialization of variables

#include <iostream>
using namespace std;

int main ()
{
  int a=5;               // initial value: 5
  int b(3);              // initial value: 3
  int c{2};              // initial value: 2, C++11 only. Use -std=c++11 flag
  int result;            // initial value undetermined

  a = a + b;
  result = a - c;
  cout << result << endl;

  return 0;
}
