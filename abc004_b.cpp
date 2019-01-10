#include<iostream>
#include<string.h>
using namespace std;

int main() {
	
	char board[4][10];

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> board[i][j];
		}
	}

	for (int i = 3; i >= 0; i--) {
		for (int j = 3; j >= 0; j--) {
			if (j != 3) 
				cout << " ";
				cout << board[i][j];
			
		}
		cout << endl;
	}

	

	return 0;
}