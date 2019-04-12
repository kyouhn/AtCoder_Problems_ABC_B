#include"bits/stdc++.h"

using namespace std;

int main() {
	int A, B, C, D;
	cin >> A >> B >> C >> D;

	int startMAX = max(A,C);
	int endMIN = min(B, D);

	cout << max(0, endMIN-startMAX) << endl;

	return 0;
}