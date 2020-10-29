/*************************************************************************
	> File Name: 003.cpp
	> Author: Kai
	> Created Time: Thu Oct 29 02:13:28 2020
 ************************************************************************/

#include<iostream>
using namespace std;

void f() {
	long n = 2, res, num = 600851475143;
	while (n * n < num) {
		if (num % n == 0) res = n;
		while (num % n == 0) num /= n;
		n++;
	}
	if (num != 1) res = num;
	cout << res << endl;
}

int main() {
	f();
	return 0;
}
