#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    vector<double> p(N);
    cin >> N;
    for(int n=0;n<N;n++) cin >> p[n];

    vector<vector<double>> dp(N+1,vector<double>(N+1,0));
    dp[0][0] = 1;

    for(int i=1;i<=N;i++){
        for(int j=0;j<=i;j++){
            if(j==0) dp[i][j] = dp[i-1][j]*(1-p[i-1]);
            else if(j==i) dp[i][j] = dp[i-1][j-1]*p[i-1];
            else dp[i][j] = dp[i-1][j-1]*p[i-1]+dp[i-1][j]*(1-p[i-1]);
        }
    }

    double ans = 0;
    for(int t=(N/2)+1;t<=N;t++) ans += dp[N][t];

    printf("%.9f\n",ans);
    return 0;
}