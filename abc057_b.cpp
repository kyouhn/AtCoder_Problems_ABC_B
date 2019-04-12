#include"bits/stdc++.h"

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M;
	cin >> N >> M;
	int a[50], b[50], c[50], d[50];

	for (int i = 0; i < N; i++) {
		cin >> a[i] >> b[i];
	}
	for (int i = 0; i < M; i++) {
		cin >> c[i] >> d[i];
	}

	for (int i = 0; i < N; i++) {
		int ans;
		int cnt = 1e9;
		for (int j = M - 1; j >= 0; j--) {
			if (cnt >= abs(a[i] - c[j]) + abs(b[i] - d[j])) {
				ans = j + 1;
				cnt = abs(a[i] - c[j]) + abs(b[i] - d[j]);
			}
		}
		cout << ans << endl;
	}
	return 0;
}
