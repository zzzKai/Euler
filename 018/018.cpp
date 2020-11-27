/*************************************************************************
	> File Name: 018.cpp
	> Author: Kai
	> Created Time: Fri Nov 27 12:47:28 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int n, num[20][20], dp[20][20];

int main() {
	n = 15;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cin >> num[i][j];
		}
	}
	int res = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + num[i][j];
			res = max(res, dp[i][j]);
		}
	}
	cout << res << endl;
	return 0;
}
