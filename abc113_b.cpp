#include "bits/stdc++.h"

using namespace std;

int main() {
	int N, A;
	int H[999];
	double T;
	cin >> N >> T >> A;
	double b = 10000000;
	int ans;
	for (int i = 0; i < N; i++) {
		cin >> H[i];
		if (b > abs(A - (T - H[i] * 0.006))) {
			b = abs(A - (T - H[i] * 0.006));
			ans = i + 1;
		}
	}

	cout << ans << endl;

	return 0;
}