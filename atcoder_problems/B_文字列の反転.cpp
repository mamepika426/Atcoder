#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    string S;
    cin >> S;
    int N;
    cin >> N;
    vector<int> l(N,0),r(N,0);
    for(int n=0;n<N;n++) cin >> l[n] >> r[n];

    for(int n=0;n<N;n++){
        reverse(S.begin()+l[n]-1,S.begin()+r[n]);
    }

    cout << S << endl;
    return 0;
}