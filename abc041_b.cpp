#include"bits/stdc++.h"

using namespace std;

int main() {
	long long A, B, C;
	cin >> A >> B >> C;
	long long X = 1e9+7;
	cout << (((A%X)*(B%X)) % X*(C%X)) % X << endl;

	return 0;
}