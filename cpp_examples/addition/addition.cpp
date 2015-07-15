/*
 * addition.cpp
 *
 *  Created on: Jul 16, 2015
 *      Author: hamed
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char **argv) {
	double num1, num2, sum;

	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;

	sum = num1 + num2;
	cout << num1 << " + " << num2 << " = " << sum << endl;

	return 0;
}

