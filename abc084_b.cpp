#include"bits/stdc++.h"

using namespace std;

int main() {
	int A, B;
	cin >> A >> B;
	char s[100];
	cin >> s;
	string ans = "Yes";
	for (int i = 0; i < A; i++) {
		if (!('0' <= s[i] && s[i] <= '9')) {
			ans = "No";
		}
	}
	if (s[A] != '-'){
		ans = "No";
	}

	for (int i = A + 1; i <= A + B; i++) {
		if (!('0' <= s[i] && s[i] <= '9')) {
			ans = "No";
		}
	}

	cout << ans << endl;
	return 0;
}