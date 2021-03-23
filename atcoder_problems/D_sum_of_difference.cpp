#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<long long> A(N);
    for(int n=0;n<N;n++) cin >> A[n];
    long long sum = 0;
    for(int n=0;n<N;n++) sum += A[n];
    sort(A.begin(),A.end());

    vector<long long> cum(N);
    cum[0]=A[0];
    for(int n=1;n<N;n++) cum[n] = cum[n-1]+A[n];

    long long ans = 0;
    for(int n=0;n<N-1;n++){
        ans -= (N-n-1)*A[n];
        ans += sum - cum[n];
    }
    cout << ans << endl;
    return 0;
}