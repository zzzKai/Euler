/*************************************************************************
	> File Name: 013.cpp
	> Author: Kai
	> Created Time: Thu Nov 26 01:32:51 2020
 ************************************************************************/

#include<iostream>
#include <cstring>
using namespace std;

int res[55] = {1, 0};
char num[55];

int main() {
	for (int i = 0; i < 100; i++) {
		cin >> num;
		int len = strlen(num);
		if (res[0] < len) res[0] = len;
		for (int j = 0; j < len; j++) {
			res[len - j] += num[j] - '0';
		}
		for (int j = 1; j <= res[0]; j++) {
			if (res[j] < 10) {
				continue;
			}
			res[j + 1] += res[j] / 10;
			res[j] %= 10;
			res[0] += (j == res[0]);
		}
	}
	for (int i = res[0]; i > res[0] - 10; i--) {
		cout << res[i];
	}
	cout << endl;
	return 0;

//	cin >> s1 >> s2;
//	num1[0] = strlen(s1);
//	num2[0] = strlen(s2);
//	for (int i = 0, j = num1[0]; i < num1[0]; i++, j--) {
//		num1[j] = s1[i] - '0';
//	}
//	for (int i = 0, j = num2[0]; i < num2[0]; i++, j--) {
//		num2[j] = s2[i] - '0';
//	}
//	sum[0] = max(num1[0], num2[0]);
//	int carry = 0;
//	for (int i = 1; i <= sum[0]; i++) {
//		sum[i] = carry + num1[i] + num2[i];
//		if (sum[i] >= 10) {
//			carry = 1;
//			sum[i] %= 10;
//			if (i == sum[0]) {
//				sum[0]++;
//			}
//		} else {
//			carry = 0;
//		}
//	}
//	for (int i = sum[0]; i > 0; i--) {
//		cout << sum[i];
//	}
//	cout << endl;
//	return 0;
}
