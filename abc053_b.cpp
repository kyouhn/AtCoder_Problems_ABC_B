#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	cin >> s;
	
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'A') {
			for (int j = s.size() - 1; j > i; j--) {
				if (s[j] == 'Z') {
					cout << j - i + 1;
					return 0;
				}
			}
		}
	}
	cout << endl;
	return 0;
}

