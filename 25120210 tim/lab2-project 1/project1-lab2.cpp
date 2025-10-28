#include<iostream>
using namespace std;
int main() {
	cout << "Moi thay nhap diem: ";
	double x; cin >> x;
	if (x >= 0 && x < 3) cout << "F";
	else if (x < 5) cout << "D";
	else if (x < 6) cout << "C";
	else if (x < 8) cout << "B";
	else if (x <= 10) cout << "A";
	else cout << "Invalid input";
}