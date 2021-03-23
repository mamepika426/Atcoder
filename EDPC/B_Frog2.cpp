#include <iostream>
#include <vector>
using namespace std;

template<class T> void chmin(T& a,T b){
    if(a > b) a = b;
}

const long long INF = 1LL << 60;

int main(){
    int N,K;
    cin >> N >> K;
    vector<long long> h(N);
    for(int n=0;n<N;n++) cin >> h[n];

    vector<long long> dp(N,INF);
    dp[0] = 0;
  
    // for(int n=1;n<N;n++){
    //     if(n==1) dp[n] = abs(h[1]-h[0]);
    //     if(1<n&&n<K){
    //         for(int i=1;i<=n;i++){
    //               dp[n] = min(dp[n-i]+abs(h[n]-h[n-i]),dp[n]);
    //         }
    //     }
    //     else{
    //         for(int i=1;i<=K;i++){
    //             dp[n] = min(dp[n-i]+abs(h[n]-h[n-i]),dp[n]);
    //         }
    //     }
    // }

    for(int n=0;n<N;n++){
        for(int k=1;k<K+1;k++){
            if(n+k<N) chmin(dp[n+k],dp[n]+abs(h[n]-h[n+k]));
        }
    }
    cout << dp[N-1] << endl;
    return 0;
}
