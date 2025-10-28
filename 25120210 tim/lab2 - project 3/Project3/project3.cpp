#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double a, b, c, x, x1, x2;
	cin >> a >> b >> c;
	double delta;
	if (a == 0) {
		if (b == 0) {
			if (c == 0) cout << "Infinity solutions";
			else cout << "No solutions";
		}
		else {
			 x = -1.0 * c / b;
			cout << x;
		}
	}
	else {
	 delta = b * b - 4 * a * c;
	 if (delta < 0) cout << "No solutions";
	 else if (delta == 0) {
		 x = -1.0 * b / (2 * a);
		 cout << x;
	 }
	 else {
		 x1 = -1.0 * (b - sqrt(delta)) / (2 * a);
		 x2 = -1.0 * (b + sqrt(delta)) / (2 * a);
		 cout << x1 << " " << x2;
	 }
	}
}