#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N;
    cin >> N;
    vector<long long> a(N);
    for(int n=0;n<N;n++) cin >> a[n];
    //ここまでで入力終わり

    long long num_m = (N*(N+1))/2;
    long long A = 0;
    for(int n=0;n<N;n++){
        if(A>a[n]) A = a[n];
    }
    long long left = 1,right = A;
    long long ans;
    while(right-left>1){
        long long mid = (left+right)/2;
        vector<long long> b(N);
        for(int n=0;n<N;n++){
            if(a[n]>=mid) b[n] = 1;
            else b[n] = -1;
        }
        vector<long long> cum(N+1,0);
        for(int n=0;n<N;n++) cum[n+1] = cum[n]+b[n];
        long long cnt = 0;

    }

}