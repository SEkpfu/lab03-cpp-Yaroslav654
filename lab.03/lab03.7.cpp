#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(0, "");
	int n;
	double p = 0.0;
	cout << "¬ведите количество вершин треугольника: "; cin >> n;
	double x1, y1, x2, y2, fx, fy;
	cout << "¬ведите координаты 1 точки: "; cin >> fx >> fy;
	x1 = fx;
	y1 = fy;
	for (int i = 2; i <= n; i++) {
		cout << "¬ведите координаты " << i << " точки: "; cin >> x2 >> y2;
		double dx = x2 - x1;
		double dy = y2 - y1;
		p += sqrt(dx * dx + dy * dy);
		x1 = x2;
		y1 = y2;
	}
	double dx = fx - x1;
	double dy = fy - y1;
	p += sqrt(dx * dx + dy * dy);
	cout << "ѕериметр многоугольника = " << p;
}