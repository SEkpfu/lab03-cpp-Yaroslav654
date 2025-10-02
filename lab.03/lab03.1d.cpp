#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(0, "");
	double y;
	for (double x = -1.5; x >= -1.5 && x <= 1.5; x += 0.25) {
		if (x < -0.5) {
			y = 1 - x * x;
		}
		else if (x > 1) {
			y = 1 + sqrt(fabs(cos(x)));
		}
		else
		{
			y = x + 1;
		}
		cout << x << "      " << y << endl;
	}

}