#include"bits/stdc++.h"

using namespace std;

int main() {
	int N, K;
	cin >> N >> K;

	int ans = 1;
	for (int i = 0; i < N; i++) {
		ans = min(ans * 2, ans + K);
	}

	cout << ans << endl;
	return 0;
}