#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    string S;
    cin >> S;
    int north=0,east=0,west=0,south=0;
    for(int n=0;n<S.size();n++){
        if(S[n]=='N') north=1;
        else if(S[n]=='W') west=1;
        else if(S[n]=='S') south=1;
        else east=1;
    }
    if(north==south&&east==west) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}