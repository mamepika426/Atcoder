#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;

int main(){
    int N,K;
    cin >> N >> K;
    double p[N];
    for(int n=0;n<N;n++) cin >> p[n];

    double E[N];
    for(int n=0;n<N;n++) E[n] = (p[n]+1)/(double)2;

    vector<double> cum(N,0);
    cum[0] = E[0];
    for(int n=1;n<N;n++) cum[n] += cum[n-1] + E[n];
    
    double from_i_Kdices[N-K+1];
    from_i_Kdices[0] = cum[K-1];
    for(int i=1;i<=N-K;i++){
        from_i_Kdices[i] = cum[i+K-1]-cum[i-1];
    }

    double ans = 0;
    for(int i=0;i<=N-K;i++){
        if(ans < from_i_Kdices[i]) ans = from_i_Kdices[i];
    }
    printf("%.7f\n",ans);
    return 0;
}