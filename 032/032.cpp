/*************************************************************************
	> File Name: 032.cpp
	> Author: Kai
	> Created Time: Sun Nov 29 01:53:59 2020
 ************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int digit(int x) {
	return (int)floor(log10(x)) + 1;
}

int check(int x, int *num) {
	while (x) {
		if (num[x % 10] == 1) {
			return 0;
		}
		num[x % 10] = 1;
		x /= 10;
	}
	return 1;
}

int f(int a, int b, int c) {
	int num[10] = {1};
	if (check(a, num) == 0) return 0;
	if (check(b, num) == 0) return 0;
	if (check(c, num) == 0) return 0;
	return 1;
}

int main() {
	int res = 0, mark[10000] = {0};
	for (int i = 1; i < 99; i++) {
		for (int j = i + 1; 1; j++) {
			int a = digit(i), b = digit(j), c = digit(i * j);			
			if (a + b + c == 9) {
				if (f(i, j, i * j)) {
					if (mark[i * j] == 0) {
						res += i * j;
						mark[i * j] = 1;
					}
					cout << i << " * " << j << " = " << i * j << endl;
				}
			} else if (a + b + c > 9) {
				break;
			}
		}
	}
	cout << res << endl;
	return 0;
}
