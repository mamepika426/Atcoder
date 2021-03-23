#include <iostream>
#include <algorithm>
using namespace std;

bool achieve(int *P,int *a,int *b,int N,int M){
    bool can_1=false;
    for(int m=0;m<M;m++){
        if(a[m]==1&&b[m]==P[0]+2) can_1=true;
    }
    if(can_1){
        bool can_2 = true;
        for(int n=0;n<N-2;n++){
            bool can_3 = false;
            for(int m=0;m<M;m++){
                if((a[m]==P[n]+2&&b[m]==P[n+1]+2)||(a[m]==P[n+1]+2&&b[m]==P[n]+2)) can_3 = true;
            }
            if(!can_3) can_2 = false;
        }
        return can_2;
    }
    else return false;
}

int main(){
    int N,M;
    cin >> N >> M;
    if(N==2){
        int a,b;
        cin >> a >>  b;
        if(a==1&&b==2) cout << 1 << endl;
        else cout << 0 << endl;
    }
    else{
    int P[N-1],a[M],b[M];
        for(int n=0;n<N-1;n++) P[n] = n;
        for(int m=0;m<M;m++) cin >> a[m] >> b[m];
        int ans = 0;
        do{
            if(achieve(&P[0],&a[0],&b[0],N,M)) ans++;
        }while(next_permutation(P,P+N-1));
        cout << ans << endl;
    }
    return 0;
}
