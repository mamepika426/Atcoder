#include <iostream>
#include <math.h>
using namespace std;

int main(){
    long long int N;
    int ans = 0;
    cin >> N;
    int route_N = sqrt(N); 
    for(int i=1;i<=route_N;i++){
        if(i*i<N) ans += 1;
    } 
    for(int i=1;i<route_N;i++){
        if(N%i==0) ans += 2*(N/i-1-i);
        else ans += 2*(N/i-i);
    }
    if((route_N+1)*route_N<N) ans += 2;
    cout << ans << endl;
}