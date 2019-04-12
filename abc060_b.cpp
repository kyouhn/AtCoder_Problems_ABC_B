#include"bits/stdc++.h"

using namespace std;

int main() {
	int A, B, C;
	cin >> A >> B >> C;
	bool ans = false;

	for (int i = 1; i <= 100; i++) {
		if ((i*A) % B == C) {
			ans = true;
			break;
		}
	}

	if (ans) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}

	return 0;
}