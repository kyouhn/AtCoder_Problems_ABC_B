#include <iostream>

using namespace std;

int main(){
    long long N;
    cin >> N;

    if(N % 2 == 0){
        cout << N - 1 << endl;
    }else{
        cout << N + 1 << endl;
    }


    return 0;
}