/*************************************************************************
	> File Name: 022.cpp
	> Author: Kai
	> Created Time: Fri Nov 27 13:37:55 2020
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	int n = 0;
	string name[6005];
	while (cin >> name[n]) {
		n++;
	}
	sort(name, name + n);
	long long res = 0;
	for (int i = 0; i < n; i++) {
		int t = 0;
		for (int j = 0; j < name[i].size(); j++) {
			t += name[i][j] - 'A' + 1;
		}
		res += t * (i + 1);
	}
	cout << res << endl;
	return 0;
}
