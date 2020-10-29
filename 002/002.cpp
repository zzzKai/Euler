/*************************************************************************
	> File Name: 002.cpp
	> Author: Kai
	> Created Time: Thu Oct 29 01:59:57 2020
 ************************************************************************/

#include<iostream>
using namespace std;

void f() {
	int a = 1, b = 1, c = 2, res = 0;
	while (c <= 4000000) {
		if (c % 2 == 0) {
			res += c;
		}
		c = b + c;
		b = c - b;
	}
	cout << res << endl;
}

int main() {
	f();
	return 0;
}
