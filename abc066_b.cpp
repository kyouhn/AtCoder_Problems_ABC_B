#include"bits/stdc++.h"

using namespace std;

int main() {
	string S;
	cin >> S;
	for (int i = (S.size() - 1) / 2; i >= 0; i--) {
		if (S.substr(0, i) == S.substr(i, i)) {
			cout << i * 2 << endl;
			return 0;
		}
	}
}