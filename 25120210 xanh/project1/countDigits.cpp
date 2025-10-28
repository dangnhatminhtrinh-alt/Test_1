#include <iostream>
using namespace std;
void countDigits()
{
    unsigned long long n;
    cin >> n;
    int count = 0;
    while (n > 0)
    {
        count++;
        n /= 10;
    }
    cout << count;
}

int main()
{
    countDigits();
    return 0;
}