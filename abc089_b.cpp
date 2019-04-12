#include"bits/stdc++.h"

using namespace std;

int main() {
	int N;
	cin >> N;
	vector<string> s(N);
	string ans = "Three";

	for (int i = 0; i < N; i++) {
		cin >> s[i];
		if (s[i] == "Y") {
			ans = "Four";
		}
	}
	
	cout << ans << endl;
	return 0;
}