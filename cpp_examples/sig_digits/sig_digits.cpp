#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	float x_f = 0.000000001;
	float sin_x_f = sin(x_f);
	float cos_x_f = cos(x_f);
	float f_x_f = (1-sin_x_f)/cos_x_f;

	cout << setprecision(16) << "using float, f(x) = " << f_x_f << endl;

	double x = 0.007;
	double sin_x = sin(x);
	double cos_x = cos(x);
	double f_x = (1-sin_x)/cos_x;

	cout << "using double, f(x) = " << f_x << endl;
	
	double r_err = fabs((f_x-f_x_f)/f_x);

	cout << "True relative error = " << r_err << endl;

	double f_x_fi = pow(cos_x_f, 2)/ (cos_x_f * (1+ sin_x_f));
	cout << "Improved using float, f(x) = " << f_x_fi << endl;
	double f_xi = pow(cos_x, 2)/ (cos_x * (1+ sin_x));
	cout << "Immproved using double, f(x) = " << f_xi << endl;

	r_err = fabs((f_xi-f_x_fi)/f_xi);
	cout << "True relative error = " << r_err << endl;

	return 0;
}
