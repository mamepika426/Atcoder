#include <iostream>
#include <vector>
using namespace std;

int need[200001];

int main(){
    int  N;
    long long W;
    cin >> N >> W;
    vector<long long> S(N),T(N),P(N);
    for(int n=0;n<N;n++) cin >> S[n] >> T[n] >> P[n];
    //入力終わり
    int max_time = 0;
    for(int n=0;n<N;n++) max_time = max(max_time,T[n]); 

    vector<long long> need(max_time+1);
    

}