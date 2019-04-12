#include"bits/stdc++.h"

using namespace std;

int main() {
	string S;
	cin >> S;
	int cnt = 0;
	sort(S.begin(), S.end());
	for (int i = 0; i < S.length(); i++) {
		if (S[i] == S[i + 1]) {
			cnt++;
		}
	}

	cout << (cnt >= 1 ? "no" : "yes") << endl;

	return 0;
}