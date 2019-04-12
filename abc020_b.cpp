#include <iostream>
#include <string>

using namespace std;

int main(){
    string A, B;
    cin >> A >> B;

    string AB = A + B;
    int ans = stoi(AB);

    cout << ans * 2 << endl;

    return 0;
}