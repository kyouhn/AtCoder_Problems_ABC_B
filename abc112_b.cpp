#include "bits/stdc++.h"

using namespace std;

const int inf{ int(1e9) };

int main() {
	int N, T;
	cin >> N >> T;
	vector<int> c(N), t(N);
	int MAX = 1 << 30;
	int ans = MAX;

	for (int i = 0; i < N; i++) {
		cin >> c[i] >> t[i];
		if (t[i] <= T) {
			ans = min(ans, c[i]);
		}
	}
	if (ans < MAX) {
		cout << ans << endl;
	}
	else {
		cout << "TLE" << endl;
	}

	return 0;
}