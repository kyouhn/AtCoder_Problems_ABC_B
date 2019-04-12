#include"bits/stdc++.h"

using namespace std;

int main() {
	string S;
	cin >> S;

	string AF = "ABCDEF";
	int cnt[6];

	for (int i = 0; i < 6; i++) {
		cnt[i] = count(S.begin(), S.end(), AF[i]);
	}

	string ans = to_string(cnt[0]);
	for (int i = 1; i < 6; i++) {
		ans += " " + to_string(cnt[i]);
	}

	cout << ans << endl;

	return 0;
}