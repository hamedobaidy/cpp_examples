/*
 * numeric_limits.cpp
 *
 *  Created on: Jul 23, 2015
 *      Author: hamed
 */

// numeric_limits example
#include <iostream>     // std::cout
#include <limits>       // std::numeric_limits

int main () {
  std::cout << std::boolalpha;
  std::cout << "Minimum value for int: " << std::numeric_limits<int>::min() << '\n';
  std::cout << "Maximum value for int: " << std::numeric_limits<int>::max() << '\n';
  std::cout << "int is signed: " << std::numeric_limits<int>::is_signed << '\n';
  std::cout << "Non-sign bits in int: " << std::numeric_limits<int>::digits << '\n';
  std::cout << "int has infinity: " << std::numeric_limits<int>::has_infinity << '\n';
  std::cout << "Maximum value for float: " << std::numeric_limits<float>::max() << '\n';
  std::cout << "Minimum value for float: " << std::numeric_limits<float>::min() << '\n';
  std::cout << "Maximum value for double: " << std::numeric_limits<double>::max() << '\n';
  std::cout << "Maximum vlaue for long long int: " << std::numeric_limits<long long int>::max() << '\n';
  std::cout << "Double binary digits: " << std::numeric_limits<double>::digits << '\n';
  std::cout << "Double digits: "<< std::numeric_limits<double>::digits10 << '\n';
  std::cout << "long double digits: " << std::numeric_limits<long double>::digits10 << '\n';
  std::cout << "Maximum value for long double: " << std::numeric_limits<long double>::max() << '\n';
  std::cout << "long double epsilon: " << std::numeric_limits<long double>::epsilon() << '\n';
  std::cout << "double epsilon: " << std::numeric_limits<double>::epsilon() << '\n';

  return 0;
}


