//============================================================================
// Name        : area.cpp
// Author      : Hamed Mohammadi
// Version     :
// Copyright   : GNU General Public License
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double d;
	cout<<"enter diameter ";
	cin>>d;
	double area;
	area= M_PI*pow(d,2)/4;
	cout<<"area= "<<area<<endl;

	return 0;
}
