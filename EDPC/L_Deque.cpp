#include <iostream>
#include <vector>
using namespace std;

vector<vector<long long>> dp(3005,vector<long long>(3005,-1));
vector<vector<bool>> flag(3005,vector<bool>(3005,false));
vector<long long> a(3005);

long long f(int l,int r){
    if(flag[l][r]) return dp[l][r];
    
    flag[l][r] = true;
    return dp[l][r] = max(a[l]-f(l+1,r),a[r]-f(l,r-1));
}


int main(){
    int N;
    cin >> N;
    for(int n=0;n<N;n++) cin >> a[n];

    for(int n=0;n<N;n++){
        dp[n][n] = a[n];
        flag[n][n] = true;
    }


    long long ans = f(0,N-1);
    cout << ans << endl;
    return 0;
}
