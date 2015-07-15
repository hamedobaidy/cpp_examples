//============================================================================
// Name        : cpp.cpp
// Author      : Hamed Mohammdi
// Version     :
// Copyright   : GNU General Public Lisence V2
// Description : Plot example.
//============================================================================

#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main() {
	int nums[100];
	ofstream output;
	output.open("output.txt");

	for (int i = 0; i < 100; ++i) {
		nums[i] = 1 + rand() % 100;
		cout << i+1 << "\t" << nums[i] << "\n";
		output << i+1 << "\t" << nums[i] << "\n";
	}

	output.close();

	return 0;
}
