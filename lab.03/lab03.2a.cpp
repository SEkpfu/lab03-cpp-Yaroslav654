#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int k = 0;
	for (double i = 1; i <= 7; i++) {
		int x;
		cout << "Введите число "; cin >> x;
		if (x < 0) k += 1;
	}
	cout << "Количество отрицательных чисел = " << k;
}