#include<iostream>
using namespace std;

int check_Leap_year(int c) {
	if ((c % 4 == 0 && c % 100 != 0) || (c % 400 == 0)) return 1;
	else return 0;
}
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a <= 0 || b <= 0 || b > 12 || c <= 1990 || (b == 12 && a > 31)) cout << "Not a valid date";
	else {
		if (a == 31 && b == 12) cout << 1 << " " << 1 << " " << c + 1;
		else if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10) {

			if (a == 31) cout << 1 << " " << b + 1 << " " << c;
			if (a > 31) cout << "Not a valid date";
		}
		else if (b == 4 || b == 6 || b == 9 || b == 11) {
			if(a==30) cout << 1 << " " << b + 1 << " " << c;
			if(a>30) cout << "Not a valid date";
		}
		else if (b == 2) {
			if (check_Leap_year(c))
			{
				if (a <= 29) 
					if (a == 29) cout << 1 << " " << b + 1 << " " << c;
				
				else cout << "Not a valid date";
			}
			else
			{	
				if (a<=28)
					if (a == 28) cout << 1 << " " << b + 1 << " " << c;
				else cout << "Not a valid date";
			}
		}
		else cout << a + 1 << " " << b << " " << c;
	}
}