#include"bits/stdc++.h"

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int A, B, C;
	cin >> A >> B >> C;

	if (A + B == C&&A - B == C) {
		cout << "?" << endl;
	}
	else if (A + B == C && A - B != C) {
		cout << "+" << endl;
	}
	else if (A + B != C&&A - B == C) {
		cout << "-" << endl;
	}
	else {
		cout << "!" << endl;
	}

	return 0;

}