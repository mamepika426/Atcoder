#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    string S;
    cin >> N;
    if(N%2) cout << -1 << endl;
    else{
        cin >> S;
        string first_half = S.substr(0,N/2);
        string second_half = S.substr(N/2,N/2);
        int ans = 0;
        for(int n=0;n<N/2;n++){
            if(first_half[n]!=second_half[n]) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}