#include <iostream>
#include <vector>
using namespace std;

template<class T> void chmax(T& a,T b){
    if(a<b) a = b;
}

int main(){
    int N;
    long long W;
    vector<int> w(N);
    vector<long long> v(N);
    cin >> N >> W;
    for(int n=0;n<N;n++) cin >> w[n] >> v[n];

    vector<vector<long long>> dp(N+1,vector<long long>(W+1,0));
    for(int j=0;j<W;j++){
        dp[0][j] = 0;
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<=W;j++){
            //i番目を選ぶ
            if(w[i]<=j){
                chmax(dp[i+1][j],dp[i][j-w[i]]+v[i]);
            }

            //i番目を選ばない
            chmax(dp[i+1][j],dp[i][j]);
        }
    }
    cout << dp[N][W] << endl;
    return 0;
}