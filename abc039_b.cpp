#include"bits/stdc++.h"

using namespace std;

int main() {
	int X;
	cin >> X;
	
	for (int i = 0; i <= 200; i++) {
		if (X == pow(i, 4)) {
			cout << i << endl;
			return 0;
		}
	}

	return 0;
}