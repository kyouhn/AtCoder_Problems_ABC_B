#include"bits/stdc++.h"


using namespace std;

int main() {
	int W, H, N;
	cin >> W >> H >> N;

	vector<int>x(W);
	vector<int>y(H);
	vector<int>a(N);
	int ans = 0;
	int xMAX = 0;
	int yMAX = 0;

	for (int i = 0; i < N; i++) {
		cin >> x[i] >> y[i] >> a[i];
	}

	for (int i = 0; i < N; i++) {
		if (a[i] == 1) {
			xMAX = max(xMAX, x[i]);
		}
		else if (a[i] == 2) {
			W = min(W, x[i]);
		}
		else if (a[i] == 3) {
			yMAX = max(yMAX, y[i]);
		}
		else if (a[i] == 4) {
			H = min(H, y[i]);
		}
	}

	if (xMAX > W || yMAX> H) {
		cout << 0 << endl;
	}
	else {
		cout << (W - xMAX)*(H - yMAX) << endl;
	}

	return 0;
}