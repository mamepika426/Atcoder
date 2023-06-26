#include <iostream>
using namespace std;

int main(void){
    int N;
    int A[N];
    cin >> N;
    for(int n=0;n<N;n++) cin >> A[n];
    int max = 0;
    for(int n=0;n<N;n++){
        if(max<A[n]) max=A[n];
    }

    int gcd = 0;
    int ans = 0;
    for(int i=2;i<=max;i++){
        int cnt = 0;
        for(int n=0;n<N;n++){
            if(A[n]%i==0) cnt++;
        }
        if(cnt>gcd){
            gcd = cnt;
            ans = i;
        }
    }
    cout << ans << endl;
    return 0;
}