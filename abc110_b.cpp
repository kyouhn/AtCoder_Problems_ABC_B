#include"bits/stdc++.h"

using namespace std;

int main() {
	int N, M, X, Y;
	cin >> N >> M >> X >> Y;
	vector<int>x(N), y(M);

	for (int i = 0; i < N; i++) {
		cin >> x[i];
	}

	for (int i = 0; i < M; i++) {
		cin >> y[i];
	}

	int XMAX = X;
	int YMIN = Y;

	for (int i = 0; i < N; i++) {
		XMAX = max(XMAX, x[i]);
	}

	for (int i = 0; i < M; i++) {
		YMIN = min(YMIN, y[i]);
	}

	if (XMAX < YMIN) {
		cout << "No War" << endl;
	}
	else {
		cout << "War" << endl;
	}
	return 0;
}