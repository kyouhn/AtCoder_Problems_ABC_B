#include<iostream>
#include<string>

using namespace std;

int main() {
	int ans = 0;
	for (int i = 0; i < 12; i++) {
		string S;
		cin >> S;
		int found = 0;
		for (int j = 0; j < S.size(); j++) {
			if (S[j] == 'r') {
				found = 1;
			}
		}
		ans += found;
	}

	cout << ans << endl;
	return 0;
}