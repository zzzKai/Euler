/*************************************************************************
	> File Name: 004.cpp
	> Author: Kai
	> Created Time: Thu Oct 29 02:26:30 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int is_palindrome(int n) {
	int tmp = n, reverse = 0;
	while (tmp) {
		reverse = reverse * 10 + tmp % 10;
		tmp /= 10;
	}
	return n == reverse;
}

void f() {
	int res = 0;
	for (int i = 100; i < 1000; i++) {
		for (int j = i; j < 1000; j++) {
			int tmp = i * j;
			if (is_palindrome(tmp)) {
				res = max(res, tmp);
			}
		}
	}
	cout << res << endl;
}

int main() {
	f();
	return 0;
}
