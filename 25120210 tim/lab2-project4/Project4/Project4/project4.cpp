#include<iostream>
using namespace std;
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	if ((a + b) > c && (a + c) > b && (b + c) > a) {
		if (a != b && b != c && a != c) {
			if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) cout << "Right triangle";
			else cout << "Regular triangle";
		}
		if (a == b && a != c || a == c && a != b || b == c && a != b) {
			if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) cout << "Right isosceles triangle";
			else cout << "Isosceles triangle";
		}
		if (a == b && a == c) cout << "Equilateral triangle";
	}
	else cout << "Not a triangle";
}