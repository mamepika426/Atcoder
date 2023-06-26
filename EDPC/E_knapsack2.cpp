#include <iostream>
#include <vector>
using namespace std;

const long long INF = 1LL << 60;

template<class T> void chmin(T& a,T b){
    if(a>b) a = b;
}

template<class T> void chmax(T& a,T b){
    if(a<b) a = b;
}


// int N, W, w[101], v[101];
// long long dp[101][201010];
// //---------------------------------------------------------------------------------------------------
// int main() {
//     cin >> N >> W;
//     for(int i=0;i<N;i++) cin >> w[i] >> v[i];
 
//     for(int i=0;i<N + 1;i++){ 
//         for(int val=0; val <1000002;val++) dp[i][val] = INF;
//     }
//     dp[0][0] = 0;
 
//     // for(int i=0;i<N;i++) {
//     //     for(int val=0;val<1000002;val++) {
//     //     chmin(dp[i + 1][val], dp[i][val]);
//     //     chmin(dp[i + 1][val + v[i]], dp[i][val] + w[i]);
//     //     }
//     // }
//     for(int i=0;i<N;i++){
//         for(long long j=0;j<1000002;j++){
//             //i番目を選ぶ
//             if(j-v[i]>=0) chmin(dp[i+1][j],dp[i][j-v[i]]+w[i]);

//             //i番目を選ばない
//             chmin(dp[i+1][j],dp[i][j]);
//         }
//     }
//     int ans = 0;
//     for(int val=0;val < 1000002;val++) if (dp[N][val] <= W) chmax(ans, val);
//     cout << ans << endl;
//     return 0;
// }

int N;
long long W;
long long w[101],v[101];
long long dp[101][100002];

int main(){
    cin >> N >> W;
    for(int n=0;n<N;n++) cin >> w[n] >> v[n];

    for(int i=0;i<=N;i++){
        for(int j=0;j<100002;j++){
            dp[i][j] = INF;
        }
    }
    dp[0][0] = 0;

    for(int i=0;i<N;i++){
        for(int j=0;j<100002;j++){
            if(j-v[i]>=0) chmin(dp[i+1][j],dp[i][j-v[i]]+w[i]);
            chmin(dp[i+1][j],dp[i][j]);
        }
    }
    int ans = 0;
    for(int j=0;j<100002;j++){
        if(dp[N][j]<=W) chmax(ans,j);
    }
    cout << ans << endl;
    return 0;


    
    for(int i=0;i<N;i++) {
        for(int val=0;val<100002;val++) {
        chmin(dp[i + 1][val], dp[i][val]);
        chmin(dp[i + 1][val + v[i]], dp[i][val] + w[i]);
        }
    }

}


