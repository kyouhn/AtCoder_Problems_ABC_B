#include <iostream>
#include <algorithm>
#include <string>
#include <set>

using namespace std;

int main(){
    string S;
    int k;
    cin >> S >> k;
    int cnt = 0;

    if(S.size() >= k){
        set<string> SS;
        for (int i = 0; i <= S.size() - k; ++i) {
            SS.insert(S.substr(i,k));
        }
        cnt = SS.size();
    }

    cout<<cnt<<endl;
    return 0;
}