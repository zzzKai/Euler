/*************************************************************************
	> File Name: 015.cpp
	> Author: Kai
	> Created Time: Fri Nov 27 12:27:34 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
	long long dp[22][22] = {0};
	for (int i = 1; i <= 21; i++) {
		for (int j = 1; j <= 21; j++) {
			if (i == 1 && j == 1) {
				dp[i][j] = 1;
			} else {
				dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
			}
		}
	}
	cout << dp[21][21] << endl;
	return 0;
}
