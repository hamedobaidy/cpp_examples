/*
 * vector_example.cpp
 *
 *  Created on: Jul 18, 2015
 *      Author: hamed
 */

#include <iostream>
#include <cstdlib>
#include <vector>
#include <random>

using namespace std;

int main(int argc, char **argv) {
	vector<double> vec(10);

	default_random_engine generator;
	uniform_real_distribution<double> dist(1, 100);

	for (int i = 0; i < vec.size(); ++i) {
		double d = dist(generator);  // generates number in the range 1..6
		vec[i] = d;
		cout << d << " value set at position " << i << endl;
	}
	return EXIT_SUCCESS;
}



