#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main() {
	ifstream fin("input.txt");
	ofstream fout("output.txt");
	int a, b, c;
	fin >> a >> b >> c;
	float kq = 1.0 * (a + b + c) / 3;
	fout << kq;
	fin.close();
	fout.close();
}