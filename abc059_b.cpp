#include"bits/stdc++.h"

using namespace std;

int main() {
	double A, B;
	cin >> A >> B;
	if (A > B) {
		cout << "GREATER";
	}
	else if (A < B) {
		cout << "LESS";
	}
	else {
		cout << "EQUAL";
	}

	cout << endl;

	return 0;
}