//============================================================================
// Name        : math_cpp.cpp
// Author      : Hamed Mohammadi
// Version     :
// Copyright   : GNU General Public License
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	cout << "Simple programs that shows C++ library math functions." << endl;

	cout << "Computing area of a circle" << endl;
	cout << "Enter diameter of circle : ";
	double d;
	cin >> d;
	double area = 3.14 * pow(d, 2) / 4;
	cout << "Area of circle = " << area << endl;

	cout << "Compute Square root of x" << endl;
	double x;
	cout << "Enter a number to compute its square root : ";
	cin >> x;
	cout << "sqrt(" << x << ") = " << sqrt(x) << endl;

	cout << "Compute natural logarithm of x" << endl;
	cout << "Enter a number to compute its natural logarithm : ";
	cin >> x;
	cout << "log(" << x << ") = " << log(x) << endl;
	return 0;
}
