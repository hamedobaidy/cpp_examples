//============================================================================
// Name        : addition_cpp.cpp
// Author      : Hamed Mohammadi
// Version     :
// Copyright   : GNU General Public License
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "This program adds two integers." << endl;

	int num1 = 0;
	int num2 = 0;
	int sum = 0;

	cout << "Enter first number : " ;
	cin >> num1;

	cout << "Enter second number : ";
	cin >> num2;

	sum = num1 + num2;

	cout << "Sum  = " << sum << endl;

	return 0;
}
