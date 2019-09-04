#include"bits/stdc++.h"

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int A, B;
	cin >> A >> B;
	int ans = 0;

	int tmp = 0;
	if (B == 1) {
		cout << 0 << endl;
	}
	else {
		for (int i = 1; i <= 20; i++)
		{
			if (A * i - tmp >= B) {
				cout << i << endl;
				return 0;
			}
			tmp++;
		}
	}

	return 0;
}
