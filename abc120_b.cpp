#include"bits/stdc++.h"

using namespace std;

int main() {
	int A, B, K;
	cin >> A >> B >> K;
	int num = 0;

	for (int i = 100; i >= 1; i--) {
		if (A%i == 0 && B%i == 0) {
			num++;
			if (num == K) {
				cout << i << endl;
			}
		}
	}
	return 0;