#include <iostream>
#include <climits>
using namespace std;
int main() {
	int n; cin >> n;
	int a[100];
	int even[100];
	int e = 0;
	int count_e = 0;
	int odd[100];
	int o = 0;
	int count_o = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] % 2 == 0) {
			even[e++] = a[i];
			count_e++;
		}
		else {
			odd[o++] = a[i];
			count_o++;
		}
	}
	int Max = odd[0];
	int Min = even[0];
	if (count_e == 0 && count_o != 0) {
		cout << "No even number" << endl;
		for (int i = 1; i < count_o; i++) {
			if (odd[i] >= Max) Max = odd[i];
		}
		cout << Max << endl;
	}
	else if (count_e != 0 && count_o == 0) {
		for (int i = 1; i < count_e; i++) {
			if (even[i] <= Min) Min = even[i];
		}
		cout << Min << endl;
		cout << "No odd number" << endl;
	}
	else if (count_e == 0 && count_o == 0) {
		cout << "No even number" << endl;
		cout << "No odd number" << endl;
	}
	else {
		for (int i = 1; i < count_e; i++) {
			if (even[i] <= Min) Min = even[i];
		}
		cout << Min << endl;
		for (int i = 1; i < count_o; i++) {
			if (odd[i] >= Max) Max = odd[i];
		}
		cout << Max << endl;
	}
}