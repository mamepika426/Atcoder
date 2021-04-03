#include <iostream>
#include <algorithm>
using namespace std;

const long long INF = 1LL << 60;

int main(){
    int N,M;
    cin >> N >> M;
    vector<long long> a(N),b(N),c(M),d(M),check(N,0);
    for(int n=0;n<N;n++) cin >> a[n] >> b[n];
    for(int m=0;m<M;m++) cin >> c[m] >> d[m];

    for(int n=0;n<N;n++){
        long long dist = INF;
        for(int m=0;m<M;m++){
            if(dist>abs(a[n]-c[m])+abs(b[n]-d[m])){
                dist = abs(a[n]-c[m])+abs(b[n]-d[m]);
                check[n] = m+1;
            }
        } 
    }
    for(int n=0;n<N;n++) cout << check[n] << endl;
    return 0;
}