#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int n;
	cout << "¬ведите целое число n - "; cin >> n;
	double s = 0;
	for (int k = 2; k <= 2 * n; k += 2) {
		s += 1.0 / k;
	}
	cout << s;
}