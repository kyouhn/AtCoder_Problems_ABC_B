#include "bits/stdc++.h"

using namespace std;

int main() {
	string s;
	cin >> s;
	string ans = "AC";

	if (s[0] != 'A') {
		ans = "WA";
	}
	int C = 0;
	for (int i = 2; i < s.length() - 1; i++) {
		if (s[i] == 'C') {
			C++;
		}
	}
	if (C != 1) {
		ans == "WA";
	}


	int cnt = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			cnt++;
		}
	}
	if (cnt != 2) {
		ans = "WA";
	}

	cout << ans << endl;
	return 0;
}