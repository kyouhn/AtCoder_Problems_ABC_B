#include"bits/stdc++.h"

using namespace std;

int main() {
	int N, Q;
	cin >> N >> Q;
	vector<int>L(Q);
	vector<int>R(Q);
	vector<int>T(Q);
	vector<int>tmp(100);

	for (int i = 0; i < Q; i++) {
		cin >> L[i] >> R[i] >> T[i];
	}

	for (int i = 0; i < Q; i++) {
		for (int j = L[i] - 1; j < R[i]; j++) {
			tmp[j] = T[i];
		}
	}

	for (int i = 0; i < N; i++) {
		cout << tmp[i] << endl;
	}
	return 0;
}