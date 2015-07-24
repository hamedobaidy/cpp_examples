// my first string
#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string mystring;
  mystring = "This is the initial string content";
  cout << mystring << endl;
  mystring = "This is a different string content";
  cout << mystring << endl;
  string another_string = "This is another string";
  string all = mystring + "\n" + another_string;
  cout << all << endl;
  return 0;
}
