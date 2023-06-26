#include <iostream>
#include <vector>
using namespace std;

const int mod_num = 1e9 + 7;

int main(){
    int N,K;
    cin >> N >> K;
    vector<int> a(N+1);
    for(int n=1;n<=N;n++) cin >> a[n];

    vector<vector<int>> dp(N+1,vector<int>(K+1));
    dp[0][0] = 1;
    for(int j=1;j<=K;j++) dp[0][j] = 0;

    vector<int> cum(K+2);
    cum[0] = 0;
    for(int j=1;j<=K+1;j++) cum[j] = 1;

    for(int i=0;i<N;i++){
        for(int j=0;j<=K;j++){
            dp[i+1][j] = (cum[j+1]-cum[max(0,j-a[i+1])]+mod_num)%mod_num;
        }
        for(int j=0;j<=K;j++){
            cum[j+1] = (cum[j]+dp[i+1][j])%mod_num;
        }
    }



    cout << dp[N][K] << endl;
    return 0;
}