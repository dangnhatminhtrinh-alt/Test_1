#include<iostream>
#include<fstream>
using namespace std;
int main() {
	ifstream fin("input.txt");
	ofstream fout("output.txt");
	int n; fin >> n;
	int ans = 0;
	while (n > 0) {
		ans += n % 10;
		n /= 10;
	}
	fout << ans;
	fin.close();
	fout.close();
}