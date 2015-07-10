/*
 ============================================================================
 Name        : sum.cpp
 Author      : Hamed Mohammadi
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C++,
 ============================================================================
 */

#include <iostream>

using namespace std;

int main(void) {
	float sum = 1.0;
	for(int i = 0; i < 10000; i++) {
		sum+=0.00001;
	}
	cout << "sum = " << sum << endl; /* prints !!!Hello World!!! */
	return 0;
}
