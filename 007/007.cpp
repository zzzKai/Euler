/*************************************************************************
	> File Name: 007.cpp
	> Author: Kai
	> Created Time: Tue Nov 24 03:51:20 2020
 ************************************************************************/

#include<iostream>
using namespace std;
#define max_n 200000

int prime[max_n + 5];
void init() {
	for (int i = 2; i <= max_n; i++) {
		if (!prime[i]) {
			prime[++prime[0]] = i;
		}
		for (int j = 1; j <= prime[0]; j++) {
			if (i * prime[j] > max_n) {
				break;
			}
			prime[prime[j] * i] = 1;
			if (i % prime[j] == 0) {
				break;
			}
		}
	}
	return;
}

int main() {
	init();
	cout << prime[10001] << endl;
	return 0;
}
