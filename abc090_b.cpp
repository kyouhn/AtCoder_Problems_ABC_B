#include"bits/stdc++.h"

using namespace std;

int main() {
	int A, B;
	cin >> A >> B;

	int n = 0;
	int v = 0;
	int total = 0;
	for (int i = A; i <= B; i++) {
		int pos = i % 10;
		n = i / 10000 % 10;
		int a = i / 10 % 10;
		v = i / 1000 % 10;
		if (pos == n && a == v) {
			total++;
		}
	}

	cout << total << endl;

	return 0;
}