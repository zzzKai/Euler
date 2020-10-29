/*************************************************************************
	> File Name: 005.cpp
	> Author: Kai
	> Created Time: Thu Oct 29 02:47:11 2020
 ************************************************************************/

#include<iostream>
using namespace std;

long gcd(long a, long b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

void f() {
	long res = 2520;
	for (int i = 11; i <= 20; i++) {
		res = res * i / gcd(res, i);
	}
	cout << res << endl;
}

int main() {
	f();
	return 0;
}
