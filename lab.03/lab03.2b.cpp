#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(0, "");
	int k = 0;
	for (double i = 1; i <= 7; ++i) {
		int x;
		cout << "¬ведите число "; cin >> x;
		if (abs(x) >= 10 && abs(x) <= 99) {
			k += x;
		}
	}
	cout << "—умма двухзначных чисел = " << k;
}