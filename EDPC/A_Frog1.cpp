#include <iostream>
#include <vector>
using namespace std;

const long long INF = 1LL << 60;

int main(){
    int N;
    cin >> N;
    vector<long long> h(N);
    for(int n=0;n<N;n++) cin >> h[n];

    vector<long long> dp(N,INF);
    dp[0] = 0;
    for(int n=1;n<N;n++){
        if(n==1) dp[n] = abs(h[1]-h[0]);
        else{
            dp[n] = min(dp[n-1]+abs(h[n]-h[n-1]),dp[n-2]+abs(h[n]-h[n-2]));
        }
    }
    cout << dp[N-1] << endl;
    return 0;
}
