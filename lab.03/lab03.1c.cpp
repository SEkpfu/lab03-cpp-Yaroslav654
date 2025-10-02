#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(0, "");
	double y = 0.0;
	for (double x = 0; x <= 2 * M_PI; x += M_PI / 6.0) {
		y = cos(x);
		cout << x << "   " << y << endl;
	}
}