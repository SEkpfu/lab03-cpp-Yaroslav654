#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(0, "");
	int n;
	double p = 0.0;
	cout << "������� ���������� ������ ������������: "; cin >> n;
	double x1, y1, x2, y2, fx, fy;
	cout << "������� ���������� 1 �����: "; cin >> fx >> fy;
	x1 = fx;
	y1 = fy;
	for (int i = 2; i <= n; i++) {
		cout << "������� ���������� " << i << " �����: "; cin >> x2 >> y2;
		double dx = x2 - x1;
		double dy = y2 - y1;
		p += sqrt(dx * dx + dy * dy);
		x1 = x2;
		y1 = y2;
	}
	double dx = fx - x1;
	double dy = fy - y1;
	p += sqrt(dx * dx + dy * dy);
	cout << "�������� �������������� = " << p;
}