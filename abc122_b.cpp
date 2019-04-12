#include"bits/stdc++.h"

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	string S;
	cin >> S;
	int sum = 0, ans = 0;

	for (int i = 0; i < S.length(); i++) {
		if (S[i] == 'A' || S[i] == 'C' || S[i] == 'G' || S[i] == 'T') {
			sum++;
		}
		else {
			sum = 0;
		}
		ans = max(ans, sum);
	}

	cout << ans << endl;
	return 0;
}