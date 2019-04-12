#include"bits/stdc++.h"

using namespace std;

int main() {
	int X;
	cin >> X;
	int ans = 1;

	for (int i = 2; i < 40; i++) {
		int num = i*i;
		while (num <= X) {
			ans = max(ans, num);
			num *= i;
		}
	}

	cout << ans << endl;

	return 0;
}