#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        cout << N[i];
    }
    cout << min(N[i]) << endl;
    return 0;
}