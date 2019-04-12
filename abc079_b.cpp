#include"bits/stdc++.h"

using namespace std;

int main() {
	long long N;
	cin >> N;
	vector<long long>L(N+1);
	long long ans = 0;

	for (int i = 0; i <= N; i++) {
		if (i == 0) {
			L[i] = 2;
			ans = L[i];
		}
		else if (i == 1) {
			L[i] = 1;
			ans = L[i];
		}
		else {
			L[i] = L[i - 1] + L[i - 2];
			ans = L[i];
		}
	}
	cout << ans << endl;
	return 0;
}