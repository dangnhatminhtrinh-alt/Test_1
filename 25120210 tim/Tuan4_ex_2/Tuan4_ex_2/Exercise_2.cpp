#include <iostream>
#include <climits>
using namespace std;
void Swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int n; int k;
    cin >> n >> k;
    if (k <= 0) {
        cout << "Not found";
        return 0;
    }
    int a[100];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] >= a[j]) Swap(a[i], a[j]);
        }
    }
    int cnt = 0;
    for (int i = n - 1; i > 0; i--) {
        if (a[i] == a[i - 1]) cnt++;
    }
    if (n - cnt >= k) cout << "Not found" << endl;

}