/*
 * pointer_example.cpp
 *
 *  Created on: Jul 18, 2015
 *      Author: hamed
 */

#include <iostream>
#include <cstdlib>

int main(int argc, char **argv) {
	double *a, b;
	b = 4.23;
	a = &b;

	std::cout << "a = " << a << "\t*a = " << *a << std::endl;
	std::cout << "b = " << b << "\t&b = " << &b << std::endl;

	return EXIT_SUCCESS;
}


