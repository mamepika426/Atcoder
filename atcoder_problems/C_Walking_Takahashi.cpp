#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

//この答えは制約的にきつい
/*
int main(){
    long long X,K,D;
    cin >> X >> K >> D;
    vector<long long>dp(K+1,0);
    dp[0] = abs(X);
    for(long long k=0;k<K;k++){
        dp[k+1] = min(abs(dp[k]+D),abs(dp[k]-D));
    }
    cout << dp[K] << endl;
    return 0;
}
*/

int main(){
    long long X,K,D;
    cin >> X >> K >> D;
    X = abs(X);
    long long to_min = X/D;
    long long to_second_min;
    long long ans;
    if(to_min<=K){
        if(abs(X-D*to_min)>abs(X-D*to_min-D)){
            to_second_min = to_min;
            to_min++;
        }
        else to_second_min = to_min+1;
        if(!((K-to_min)%2)) ans = abs(X-D*to_min);
        else ans = abs(X-D*to_second_min);
    }
    else ans = X - K*D;
    cout << ans << endl;
    return 0; 
}