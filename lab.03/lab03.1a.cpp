#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double tc, tf;
	tc = 0;
	while (tc < 100) {
		tc += 10;
		tf = 9.0 / 5 * tc + 32;
		cout << "����������� � �������� ������� = " << tc << endl;
		cout << "���������� � �������� ���������� = " << tf << endl;
	}
}