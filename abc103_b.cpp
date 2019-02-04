#include"bits/stdc++.h"

using namespace std;

int main() {
	string S, T;
	cin >> S >> T;
	string ans = "No";
	for (int i = 0; i < S.length(); i++) {
		if (S == T) {
			ans = "Yes";
			break;
		}
		S = S.back() + S.substr(0, S.length() - 1);
	}

	cout << ans << endl;
	return 0;
}