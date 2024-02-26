#include <iostream>
#include <cmath>
using namespace std;
int main() {
	float a, b, c, x1, x2, delta;
	cout << "UNG DUNG GIAI PHUONG TRINH BAC 2\n";
	cout << "Nhap a."; cin >> a;
	cout << "Nhap b."; cin >> b;
	cout << "Nhap c."; cin >> c;
	if (a == 0) {
		// bx + c = 0
		if (b == 0) {
			if (c == 0) {
				cout << "phuong trinh vo nghiem";
			}
			else {
				cout << "phuong trinh co vo so nghiem";
			}
		}
		else {
			x1 = x2 = -c / b;
			cout << "phuong trinh co nghiem x=" << x1;
		}
	}
	else {
		delta = b * b - 4 * a * c;
		if (delta < 0) {
			cout << "phuong trinh vo nghiem";
		}
		else if (delta == 0) {
			x1 = x2 = -b / (2 * a);
			cout << "phuong trinh co nghiem kep x1=x2=" << x1;
		}
		else {
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			cout << "phuong trinh co 2 nghiem phan biet\n";
			cout << "x1=" << x1;
			cout << "x2=" << x2;
		}
	}
	return 0;
}
