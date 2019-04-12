#include"bits/stdc++.h"

using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int>a(N+1);

	for (int i = 1; i <= N; i++) {
		cin >> a[i];
	}

	int tmp = 1, ans = 0;
	while(1) {
		ans++;
		if (a[tmp] == 2) {
			cout << ans << endl;
			break;
		}
		tmp = a[tmp];
		if (ans > N) {
			cout << -1 << endl;
			break;
		}
	}

	return 0;
}