#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(0, "");
	double x = 0.0, y = 0.0;
	do {
		y = log(x + 1) * sin(x);
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
		x += 0.5;
	} while (x <= 5);
}