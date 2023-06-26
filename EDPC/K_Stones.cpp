#include <iostream>
#include <vector>
using namespace std;

template<class T> void chmin(T& a,T b){
    if(a > b) a = b;
}

int main(){
    int N,K;
    cin >> N >> K;
    vector<int> a(N);
    for(int n=0;n<N;n++) cin >> a[n];

    vector<bool> dp(K+1,false);

    //ここまで初期化

    for(int k=0;k<K;k++){
        for(int n=0;n<N;n++){
            if(k+a[n]<=K){
                if(!dp[k]) dp[k+a[n]] = true;
            }
        }
    }

    if(dp[K]) cout << "First" << endl;
    else cout << "Second" << endl;
    return 0;

}