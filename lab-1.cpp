// ������� ����������� ���������

#include <iostream>
#include <math.h>
using namespace std;

float Disc(float a, float b, float c) {
	return (b * b) - (4 * a * c);
}

float Qudar(float a, float b, float c) {

	if (a == 0 && b != 0) {
		cout << "Root: " << -c / b << endl;
		return 0;
	}
	else if (a == 0 && b == 0) {
		if (c == 0) {
			cout << "The equation has an infinite number of roots" << endl;
			return 0;
		}
		else {
			cout << "No roots" << endl;
			return 0;
		}
	}
	else {

		float D = Disc(a, b, c);

		if (D < 0) {
			cout << "Discriminant< 0, no valid roots" << endl;
			return 0;
		}

		else if (D == 0) {
			cout << "Root: " << -b / (2 * a) << endl;
			return 0;
		}
		else {
			cout << "The equation has a two roots: " << (-b + sqrt(D)) / (2 * a) << " and " << (-b - sqrt(D)) / (2 * a) << endl;
			return 0;
		}
	}
}

int main() {
	float a, b, c, D;

	cout << "Enter coefficents a, b, c of ax^2 + bx + c = 0 through space" << endl;
	cin >> a;
	cin >> b;
	cin >> c;

	Qudar(a, b, c);
	

	return 0;
}