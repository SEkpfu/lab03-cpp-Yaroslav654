#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(0, "");
	int n;
	double x;
	bool ch = false;
	int a = 0;
	cout << "¬ведите целое число "; cin >> n;
	cout << "¬ведите вещенственное число "; cin >> x;
	double res = cos(x);
	for (int i = 1; i <= n; ++i) {
		res = cos(x + res * a);
		if (!ch) {
			a += 1;
			ch = true;
		}
	}
	cout << res;
}