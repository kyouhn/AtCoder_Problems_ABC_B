#include"bits/stdc++.h"

using namespace std;

int main() {
	string s;
	cin >> s;
	int cnt = 0;

	for (int i = 1; i < s.length() - 1; i++) {
		cnt++;
	}

	cout << s[0] << cnt << s.back() << endl;

	return 0;
}