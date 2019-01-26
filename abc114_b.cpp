#include "bits/stdc++.h"

using namespace std;

int main() {
	string s;
	cin >> s;
	int n = s.size();
	int ans = 999;
	for (int i = 0; i <= n - 3; i++) {
		int res = (s[i] - '0') * 100 + (s[i+1] - '0') * 10 + s[i+2] - '0';
		ans = min(ans, abs(res - 753));
	}

	cout << ans << endl;
	return 0;
}