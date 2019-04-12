#include"bits/stdc++.h"

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;
	string S;
	map<string, int>tmp;
	int cnt = 0;
	string ans;

	for (int i = 0; i < N; i++) {
		cin >> S;
		tmp[S]++;
		if (cnt < tmp[S]) {
			cnt = tmp[S];
			ans = S;
		}
	}

	cout << ans << endl;

	return 0;
}
