#include"bits/stdc++.h"

using namespace std;

int main() {
	int N, M, C;
	cin >> N >> M >> C;

	vector<int>B(M);
	int A[100][100];

	for (int i = 0; i < M; i++) {
		cin >> B[i];
	}

	int ans = 0;
	for (int i = 0; i < N; i++) {
		int sum = 0;
		for (int j = 0; j < M; j++) {
			cin >> A[i][j];
			sum += A[i][j] * B[j];
		}
		sum += C;
		if (sum > 0) {
			ans++;
		}
	}

	cout << ans << endl;

	return 0;
