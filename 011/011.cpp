/*************************************************************************
	> File Name: 011.cpp
	> Author: Kai
	> Created Time: Thu Nov 26 00:48:11 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int dirx[4] = {0, 1, 1, 1};
int diry[4] = {1, 1, 0, -1};
int num[30][30], ans;

int main() {
	for (int i = 5; i < 25; i++) {
		for (int j = 5; j < 25; j++) {
			cin >> num[i][j];
		}
	}
	for (int i = 5; i < 25; i++) {
		for (int j = 5; j < 25; j++) {
			for (int k = 0; k < 4; k++) {
				int t = num[i][j];
				for (int l = 1; l < 4; l++) {
					int x = i + dirx[k] * l;
					int y = j + diry[k] * l;
					t *= num[x][y];
				}
				ans = max(ans, t);
			}
		}
	}
	cout << ans << endl;
	return 0;
}
