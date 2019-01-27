#include"bits/stdc++.h"

using namespace std;

int main() {
	int N;
	cin >> N;

	int ans = N / 111;
	if (N % 111 != 0) {
		ans += 1;
	}

	cout << ans * 111 << endl;
	return 0;
}