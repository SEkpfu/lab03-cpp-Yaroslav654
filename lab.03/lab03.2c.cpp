#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int n;
	int minN;
	cout << "������� 7 ����� �����: " << endl;
	cin >> n;
	minN = n;
	for (int i = 1; i < 7; i++) {
		cin >> n;
		if (n < minN) {
			minN = n;
		}
	}
	cout << "���������� �� ���� ����� = " << minN;
}