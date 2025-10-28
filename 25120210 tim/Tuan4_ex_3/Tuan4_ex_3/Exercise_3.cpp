#include <iostream>
using namespace std;
void Swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int n; cin >> n;
    int a[100];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] >= a[j]) Swap(a[i], a[j]);
        }
    }
    for (int i = 0; i < n; i++) cout << a[i] << " ";
}