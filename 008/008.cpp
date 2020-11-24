/*************************************************************************
	> File Name: 008.cpp
	> Author: Kai
	> Created Time: Tue Nov 24 03:24:07 2020
 ************************************************************************/

#include<iostream>
using namespace std;

char str[1005];
long long ans, zero_cnt, cur = 1;

int main() {
	cin >> str;
	for (int i = 0; i < 1000; i++) {
		if (str[i] == '0') {
			zero_cnt++;
		} else {
			cur *= str[i] - '0';
		}
		if (i >= 13) {
			if (str[i - 13] == '0') {
				zero_cnt--;
			} else {
				cur /= str[i - 13] - '0';
			}
		}
		if (i >= 12) {
			if (zero_cnt == 0) {
				ans = max(cur, ans);
			}
		}
	}
	cout << ans << endl;
	return 0;
}
