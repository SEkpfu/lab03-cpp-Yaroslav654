#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int n;
	cout << "������� ������ ����� (������ �����): "; cin >> n;
	if (n % 2 != 0) {
		cout << "������, ����� ������ ���� ������";
		return 0;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if ((i + j) % 2 == 0) {
				cout << "o";
			}
			else
			{
				cout << "*";
			}
		}
		cout << endl;
	}
}