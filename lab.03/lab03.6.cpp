#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int n;
	int tc = 0;
	int chc = 0;
	char sg;
	cout << "������� ����� ��� ����������� ��� ���������� ������ (y/n) ";
	do {
		cin >> n;
		tc++;
		if ((n & 1) == 0) chc++;
		cout << "������ ���������� ���� �����? "; cin >> sg;
	} while (sg == 'y' || sg == 'Y');
	cout << "����� ���������� �������� ����� = " << tc << endl;
	cout << "���������� ������ ����� ����� ��� = " << chc;
}