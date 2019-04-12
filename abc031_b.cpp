#include"bits/stdc++.h"

using namespace std;

int main() {
	int L, H;
	cin >> L >> H;
	int N;
	cin >> N;
	vector<int>A(N);

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	for (int i = 0; i < N; i++) {
		if (A[i] < L) {
			cout << abs(A[i] - L) << endl;
		}
		else if (H < A[i]) {
			cout << -1 << endl;
		}
		else {
			cout << 0 << endl;
		}
	}
	return 0;
}