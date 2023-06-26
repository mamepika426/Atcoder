#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N;
    long long K;
    cin >> N >> K;
    vector<vector<long long>> T(N,vector<long long>(N));
    for(int n1=0;n1<N;n1++){
        for(int n2=0;n2<N;n2++) cin >> T[n1][n2];
    }

    int P[N];
    for(int n=0;n<N;n++) P[n] = n;
    int ans = 0;
    do{
        long long sum = 0;
        for(int n=0;n<N-1;n++){
            sum += T[P[n]][P[n+1]];
        }
        sum  += T[P[0]][P[N-1]];
        if(sum==K) ans++;
    }while(next_permutation(P,P+N));

    cout << ans/N << endl;
    return 0;
}