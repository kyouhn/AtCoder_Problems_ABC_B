#include"bits/stdc++.h"

using namespace std;

int main() {
	string S;
	cin >> S;
	sort(S.begin(), S.end());
	int cnt[100] = { 0 };

	for (int i = 0; i < S.size(); i++) {
		cnt[S[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		if (cnt[i] % 2 != 0) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;

	return 0;
}