/*************************************************************************
	> File Name: 014.cpp
	> Author: Kai
	> Created Time: Thu Nov 26 01:16:10 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int num[10000000];

int f(long long n) {
	if (n == 1) return 1;
	if (n < 10000000 && num[n]) return num[n];
	int t;
	if (n % 2 == 0) {
		t =  f(n / 2) + 1;
	} else {
		t = f(n * 3 + 1) + 1;
	}
	if (n < 10000000) {
		num[n] = t;
	}
	return t;
}

int main() {
	int ans = 1;
	for (int i = 2; i < 1000000; i++) {
		if (f(i) > f(ans)) {
			ans = i;
		}
	}
	cout << ans << endl;
	return 0;
}
