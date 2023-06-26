#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

const long long ll = 1LL<<60;

long long fun(int,vector<long long>,int);

int main(){
    int N;
    vector<long long> A(26);
    cin >> N;
    for(int n=0;n<N;n++) cin >> A[n];

    long long ans = ll;
    for(int bit = 0;bit < (1<<N-1);bit++){
        if(fun(N,A,bit)<ans) ans = fun(N,A,bit);
    }
    cout << ans << endl;
    return 0;
}

long long fun(int N,vector<long long> A,int bit){
    vector<long long> box(22,0);
    int t = 0;
    for(int n=0;n<N;n++){
        box[t] = box[t]|A[n];
        if(bit&(1<<n)) t++;
    }
    int XOR = box[0];
    if(t>0){
        for(int tmp=1;tmp<=t;tmp++){
            XOR = XOR^box[tmp];
        }
    }
    return XOR;
}