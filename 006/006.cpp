/*************************************************************************
	> File Name: 006.cpp
	> Author: Kai
	> Created Time: Thu Oct 29 03:06:56 2020
 ************************************************************************/

#include<iostream>
using namespace std;

void f() {
	int sum = 0, ssum = 0;
	for (int i = 1; i <= 100; i++) {
		sum += i;
		ssum += i * i;
	}
	cout << sum * sum - ssum << endl;
}

int main() {
	f();
	return 0;
}
