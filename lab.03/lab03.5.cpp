#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double eps; cin >> eps;
	double s = 0;
	for (int i = 1, z = 1; 1.0 / i > eps; i += fabs(z), z = -z) {
		s += (double)z / i;
	}
	cout << s;
	return 0;
}