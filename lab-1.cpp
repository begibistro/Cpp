// Решение квадратного уравнения

#include <iostream>
#include <math.h>
using namespace std;

float Disc(float a, float b, float c) {
	return (b * b) - (4 * a * c);
}



void Qudar(float a, float b, float c, float *x1, float *x2, int *noRoot) {

	*noRoot = 0;

	if (a == 0 && b != 0) {
		*x1 = *x2 = -c / b;
	}
	else if (a == 0 && b == 0) {
		if (c == 0) {
			*noRoot = 1;
		}
		else {
			*noRoot = 2;
		}
	}
	else {

		float D = Disc(a, b, c);

		if (D < 0) {
			*noRoot = 3;
		}

		else if (D == 0) {
			*x1 = *x2 = -b / (2 * a);
		}
		else {
			*x1 = (-b + sqrt(D)) / (2 * a);
			*x2 = (-b - sqrt(D)) / (2 * a);
		}
	}
}



void PrintAnswer(float* x1, float* x2, int* noRoot) {
	if (*noRoot != 0){
		switch (*noRoot)
		{
		case 1:
			cout << "The equation has an infinite number of roots" << endl;
			return;
		case 2:
			cout << "No roots" << endl;
			return;
		case 3:
			cout << "Discriminant< 0, no valid roots" << endl;
			return;
		default:
			break;
		}
	}
	else {
		if (*x1 == *x2) {
			cout << "Root: " << *x1 << endl;
			return;
		}
		else {
			cout << "The equation has a two roots: " << *x1 << " and " << *x2 << endl;
			return;
		}
	}
}


int main() {
	float a, b, c, D, x1, x2;
	int noRoot;

	cout << "Enter coefficents a, b, c of ax^2 + bx + c = 0 through space" << endl;
	cin >> a;
	cin >> b;
	cin >> c;

	Qudar(a, b, c, &x1, &x2, &noRoot);
	PrintAnswer(&x1, &x2, &noRoot);
	
	return 0;
}