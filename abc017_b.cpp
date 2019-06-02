#include"bits/stdc++.h"

using namespace std;

int main() {
	string S;
	cin >> S;

	for (int i = 0; i < S.size(); i++) {
		if (S[i] == 'o' || S[i] == 'k' || S[i] == 'u') continue;
		if (S[i] == 'c'&&S[i + 1] == 'h') {
			i++;
			continue;
		}
		cout << "NO" << endl;
		return 0;
	}
	cout << "YES" << endl;
	return 0;
}