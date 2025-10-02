#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int c = 0;
	int n;
	int maxn = 0;
	cout << "Введите последовательность натуральных чисел: " << endl;
	while (true) {
		cin >> n;
		if (n == 0) {
			break;
		}
		if (n > maxn) {
			maxn = n;
			c = 1;
		}
		else if (n == maxn) {
			c++;
		}
	}
	cout << "Максимальный элемент = " << maxn << endl;
	cout << "Количество элементов равных максимальному = " << c;
}