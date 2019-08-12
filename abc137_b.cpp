#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int K, X;
	cin >> K >> X;
	if (K == 1) {
		cout << X;
		return 0;
	}
	else {
		int i = 1;
		while (1) {
			cout << X - K + i << " ";
			i++;
			if (K + X == X - K + i) {
				return 0;
			}
		}
	}


	return 0;
}