#include <iostream>
using namespace std;


void f1() {
	// O(n)
	int res = 0;
	for (int i = 1; i < 1000; i++) {
		if (i % 3 == 0 || i % 5 == 0) res += i;
	}
	cout << res << endl;
}

void f2() {
	int t3 = (3 + 999) * 333 / 2;
	int t5 = (5 + 995) * 199 / 2;
	int t15 = (15 + 990) * 66 / 2;
	cout << t3 + t5 - t15 << endl;
}


int main() {
	f1();
	f2();
	return 0;
}
