#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<long long> A(N),B(N),C(N);
    for(int n=0;n<N;n++) cin >> A[n];
    for(int n=0;n<N;n++) cin >> B[n];
    for(int n=0;n<N;n++) cin >> C[n];

    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    sort(C.begin(),C.end());

    vector<long long> available_C(N);
    for(int n=0;n<N;n++){
        auto iter2 = upper_bound(C.begin(),C.end(),B[n]);
        auto val2 = iter2 - C.begin();
        available_C[n] = val2;
    }

    vector<long long> cum(N+1);
    cum[0]=0;
    for(int n=1;n<=N;n++) cum[n] = cum[n-1] + available_C[n-1]; 

    long long ans = 0;
    for(int n=0;n<N;n++){
        auto iter1 = upper_bound(B.begin(),B.end(),A[n]);
        auto val1 = iter1 - B.begin();
        if(val1<N) ans += (N-val1)*N - (cum[N] - cum[val1]);
    }
    cout << ans << endl;
    return 0;
}
