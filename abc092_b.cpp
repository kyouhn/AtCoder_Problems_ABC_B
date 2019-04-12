#include"bits/stdc++.h"

using namespace std;

int main() {
	int N, D, X;
	cin >> N >> D >> X;
	vector<int>A(N);

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	int ans = X;
	
	for (int i = 0; i < N; i++) {
		int tmp = (D - 1) / A[i] + 1;
		ans += tmp;
	}

	cout << ans << endl;
	return 0;
}