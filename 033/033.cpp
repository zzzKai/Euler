/*************************************************************************
	> File Name: 033.cpp
	> Author: Kai
	> Created Time: Sun Nov 29 02:24:40 2020
 ************************************************************************/

#include <iostream>
using namespace std;

int check(int a, int b) {
	int x1 = a / 10, x2 = a % 10;
	int y1 = b / 10, y2 = b % 10;
	if (!x1 || !x2 || !y1 || !y2) {
		return 0;
	}
	if (x1 == y1 && a * y2 == b * x2) {
		return 1;
	}
	if (x1 == y2 && a * y1 == b * x2) {
		return 1;
	}
	if (x2 == y1 && a * y2 == b * x1) {
		return 1;
	}
	if (x2 == y2 && a * y1 == b * x1) {
		return 1;
	}
	return 0;
}

int gcb(int a, int b) {
	if (!b) return a;
	return gcb(b, a % b);
}

int main() {
	int a = 1, b = 1;
	for (int i = 11; i < 100; i++) {
		for (int j = i + 1; j < 100; j++) {
			if (check(i, j)) {
				a *= i;
				b *= j;
				cout << i << " / " << j << endl;
			}
		}
	}
	int c = gcb(a, b);
	cout << b / c << endl;
	return 0;
}
