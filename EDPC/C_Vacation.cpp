#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<long long> a(N),b(N),c(N);
    for(int n=0;n<N;n++) cin >> a[n] >> b[n] >> c[n];

    vector<vector<long long>> dp(3,vector<long long>(N,0));
    dp[0][0] = a[0];
    dp[1][0] = b[0];
    dp[2][0] = c[0];

    for(int n=1;n<N;n++){
        dp[0][n] = max(dp[1][n-1],dp[2][n-1]) + a[n];
        dp[1][n] = max(dp[2][n-1],dp[0][n-1]) + b[n];
        dp[2][n] = max(dp[0][n-1],dp[1][n-1]) + c[n];
    }
    long long ans = max(dp[0][N-1],dp[1][N-1]);
    ans = max(ans,dp[2][N-1]);
    cout << ans << endl;
    return 0;
}