#include <iostream>
using namespace std;
 
int num_can_see(int *bits,int N){
    int temp = 0;
    for(int j=0;j<N;j++){
        temp += bits[j];
    }
    return temp;
}
 
long long cost(long long *a,int *bits,int N){
    long long height=a[0];
    long long cost=0;
    if(N!=1){
        for(int n=1;n<N;n++){
            if(bits[n]){
                if(height>=a[n]){
                    cost += height - a[n] + 1;
                    height = height + 1;
                }
            }
            height = max(height,a[n]);
        }
    }
    return cost;
}
 
int main(){
    int N,K;
    cin >> N >> K;
    long long a[N];
    for(int n=0;n<N;n++) cin >> a[n];
    int bits[N];
    for(int n=0;n<N;n++) bits[n] = 1;
    long long ans = cost(&a[0],&bits[0],N);
    for(int i=0;i<(1<<N);i++){
        for(int n=0;n<N;n++) bits[n] = 0;
        for(int n=0;n<N;n++){
            int Div = 1<<n;
            bits[n] = (i/Div)%2;
        }
        if(num_can_see(&bits[0],N)>=K){
            if(ans>cost(&a[0],&bits[0],N)) ans=cost(&a[0],&bits[0],N);
        }
    }
    cout << ans << endl;
    return 0;
}