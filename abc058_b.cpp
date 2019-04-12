#include"bits/stdc++.h"

using namespace std;

int main() {
	string O, E;
	cin >> O >> E;

	for (int i = 0; i < O.length(); i++) {
		cout << O[i];

		if (i < E.length()) {
			cout << E[i];
		}
	}

	return 0;
}