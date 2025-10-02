#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int n;
	int tc = 0;
	int chc = 0;
	char sg;
	cout << "Вводите числа для продолжения или завершения пишите (y/n) ";
	do {
		cin >> n;
		tc++;
		if ((n & 1) == 0) chc++;
		cout << "Хотите продолжить ввод чисел? "; cin >> sg;
	} while (sg == 'y' || sg == 'Y');
	cout << "Общее количество введеных чисел = " << tc << endl;
	cout << "Количество четных чмсел среди них = " << chc;
}